// Datei: pong_main_geruest.cpp

#define CIMGGIP_MAIN
#include "CImgGIP08.h"

int main() {
	// Für das "blaue Spielfeld" ...
	const unsigned int x0 = 100, y0 = 100;
	const unsigned int x1 = 500, y1 = 500;
	// Für Position und Ausdehnung des weißen Balls ...
	unsigned int xb = 200, yb = 300;
	const unsigned int ball_size = 10;
	// Geschwindigkeit des Balls ...
	int delta_x = -3, delta_y = -3;
	// Ausdehnung und Position des Schlaegers ...
	const unsigned int schlaeger_size_x = 50, schlaeger_size_y = 20;
	unsigned int xs = 300, ys = y1 - schlaeger_size_y;

	gip_white_background();
	while (gip_window_not_closed()) {
		// Später nötig, damit die Graphik "schneller" wird …
		gip_stop_updates();

		// Blaues "Spielfeld" neu zeichnen ...
		gip_draw_rectangle(x0, y0, x1, y1, blue);

		// Ball zeichnen ...
		gip_draw_rectangle(xb, yb, xb + ball_size, yb + ball_size, white);

		// Schlaeger zeichnen ...
		gip_draw_rectangle(xs, ys, xs + schlaeger_size_x, ys + schlaeger_size_y, white);

		// Schlaeger verschieben ...
		xs = gip_mouse_x() - schlaeger_size_x / 2;

		// Falls der Schläger außerhalb des Spielfelds => zurücksetzen ...
		if (xs < x0) xs = x0;
		if (xs + schlaeger_size_x > x1) xs = x1 - schlaeger_size_x;

		// Ball-Kollisionen mit dem Rand ...
		if (xb <= x0 || xb + ball_size >= x1) delta_x *= -1;
		if (yb <= y0) delta_y *= -1;

		// Kollision mit Schlaeger ...
		if (yb + ball_size >= ys && xb + ball_size > xs && xb < xs + schlaeger_size_x) delta_y *= -1;

		// Unterer Rand erreicht => Abbruch
		if (yb + ball_size >= y1) {
			// GAME
			// G
			gip_draw_rectangle(130, 150, 150, 250, red);
			gip_draw_rectangle(130, 150, 200, 170, red);
			gip_draw_rectangle(180, 150, 200, 180, red);
			gip_draw_rectangle(170, 200, 200, 220, red);
			gip_draw_rectangle(180, 200, 200, 250, red);
			gip_draw_rectangle(130, 230, 200, 250, red);
			// A
			gip_draw_rectangle(240, 210, 270, 230, red);
			for (int i = 0; i < 20; i++) gip_draw_line(220 + i, 250, 245 + i, 150, red);
			for (int i = 0; i < 20; i++) gip_draw_line(245 + i, 150, 270 + i, 250, red);
			// M
			gip_draw_rectangle(310, 150, 329, 250, red);
			gip_draw_rectangle(361, 150, 380, 250, red);
			for (int i = 0; i < 18; i++) gip_draw_line(313 + i, 150, 336 + i, 250, red);
			for (int i = 0; i < 18; i++) gip_draw_line(336 + i, 250, 362 + i, 150, red);
			// E
			gip_draw_rectangle(400, 150, 420, 250, red);
			gip_draw_rectangle(400, 150, 470, 170, red);
			gip_draw_rectangle(400, 190, 470, 210, red);
			gip_draw_rectangle(400, 230, 470, 250, red);

			// OVER
			// O
			gip_draw_rectangle(130, 300, 150, 400, red);
			gip_draw_rectangle(130, 300, 200, 320, red);
			gip_draw_rectangle(180, 300, 200, 400, red);
			gip_draw_rectangle(130, 380, 200, 400, red);
			// V
			for (int i = 0; i < 20; i++) gip_draw_line(220 + i, 300, 245 + i, 400, red);
			for (int i = 0; i < 20; i++) gip_draw_line(245 + i, 400, 270 + i, 300, red);
			// E
			gip_draw_rectangle(310, 300, 330, 400, red);
			gip_draw_rectangle(310, 300, 380, 320, red);
			gip_draw_rectangle(310, 340, 380, 360, red);
			gip_draw_rectangle(310, 380, 380, 400, red);
			// R
			gip_draw_rectangle(400, 300, 420, 400, red);
			gip_draw_rectangle(400, 300, 470, 320, red);
			gip_draw_rectangle(450, 300, 470, 360, red);
			gip_draw_rectangle(400, 340, 470, 360, red);
			for (int i = 0; i < 25; i++) gip_draw_line(400 + i, 350, 445 + i, 400, red);

			gip_start_updates();
			gip_wait(10);
			gip_stop_updates();

			gip_wait(5e3);
			break;
		}

		// Bewege Ball ...
		xb += delta_x;
		yb += delta_y;

		// Später nötig, damit die Graphik "schneller" wird …
		gip_start_updates();

		// Später nötig, wenn die Graphik "schneller gestellt" ist …
		// Etwas Pause, damit das Spiel nicht zu schnell läuft ...
		gip_wait(33);
	}
	return 0;
}
