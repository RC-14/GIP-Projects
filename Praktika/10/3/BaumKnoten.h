#pragma once

class BaumKnoten {
	int data;
	BaumKnoten* links;
	BaumKnoten* rechts;

public:
	BaumKnoten(int data, BaumKnoten* links, BaumKnoten* rechts) : data{ data }, links{ links }, rechts{ rechts } { };

	void set_data(int data) { this->data = data; };
	void set_links(BaumKnoten* links) { this->links = links; };
	void set_rechts(BaumKnoten* rechts) { this->rechts = rechts; };

	int get_data() const { return data; };
	BaumKnoten* get_links() const { return links; };
	BaumKnoten* get_rechts() const { return rechts; };

	void ausgeben(unsigned tiefe) const;
};
