//frame.cpp
#include "panel.h"
#include "frame.h"
#include "app.h"
Frame::Frame() :
	wxFrame(NULL, wxID_ANY, "Hello World",
	wxDefaultPosition, wxSize(1280, 760))

{
	auto panel = new Panel(this); // "this" refers to the frame
}