#ifndef GRID_FONT_HPP
#define GRID_FONT_HPP

#include "sbpt_generated_includes.hpp"

namespace grid_font {

enum class TextJustification { Left, Center, Right };

// TODO: in the future I need to add
// TextJustification justification = TextJustification::Left as a parameter
draw_info::IndexedVertexPositions
get_text_geometry(const std::string &text, vertex_geometry::Rectangle bounding_rect = vertex_geometry::Rectangle());

} // namespace grid_font

#endif // GRID_FONT_HPP
