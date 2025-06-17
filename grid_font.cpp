#include "grid_font.hpp"

namespace grid_font {

// https://www.dafont.com/sburbits.charmap?back=bitmap
//

std::string zero = R"(
-****-----
**--**----
**--**----
**--**----
**--**----
**--**----
**--**----
**--**----
-****-----
----------
----------
----------
)";

std::string one = R"(
--**------
****------
--**------
--**------
--**------
--**------
--**------
--**------
******----
----------
----------
----------
)";

std::string two = R"(
-****-----
**--**----
**--**----
----**----
---**-----
--**------
-**-------
**--------
******----
----------
----------
----------
)";

std::string three = R"(
-****-----
*---**----
----**----
----**----
--***-----
----**----
----**----
*---**----
-****-----
----------
----------
----------
)";

std::string four = R"(
---***----
---***----
--****----
--*-**----
-**-**----
-*--**----
*******---
----**----
--*****---
----------
----------
----------
)";

std::string five = R"(
-*****----
-**-------
-**-------
-****-----
-*--**----
----**----
----**----
*---**----
-****-----
----------
----------
----------
)";

std::string six = R"(
--****----
-**-------
**--------
**-**-----
***-**----
**--**----
**--**----
**--**----
-****-----
----------
----------
----------
)";

std::string seven = R"(
******----
*---**----
---***----
---**-----
---**-----
---**-----
--***-----
--**------
--**------
----------
----------
----------
)";

std::string eight = R"(
-****-----
**--**----
**--**----
**--**----
-****-----
**--**----
**--**----
**--**----
-****-----
----------
----------
----------
)";

std::string nine = R"(
-****-----
**--**----
**--**----
**--**----
**-***----
-**-**----
----**----
---**-----
****------
----------
----------
----------
)";

std::string a_upper = R"(
----------
-*****----
---***----
--**-**---
--**-**---
--**-**---
-*******--
-**---**--
****-****-
----------
----------
----------
)";

std::string b_upper = R"(
----------
******----
-**--**---
-**--**---
-*****----
-**--**---
-**--**---
-**--**---
******----
----------
----------
----------
)";

std::string c_upper = R"(
----------
--****----
-**--*----
**---*----
**--------
**--------
**--------
-**--*----
--****----
----------
----------
----------
)";

std::string d_upper = R"(
----------
*****-----
-**-**----
-**--**---
-**--**---
-**--**---
-**--**---
-**-**----
*****-----
----------
----------
----------
)";

std::string e_upper = R"(
----------
*******---
-**---*---
-**-*-*---
-****-----
-**-*-----
-**---*---
-**---*---
*******---
----------
----------
----------
)";

std::string f_upper = R"(
----------
*******---
-**---*---
-**-*-*---
-****-----
-**-*-----
-**-------
-**-------
*****-----
----------
----------
----------
)";

std::string g_upper = R"(
----------
-*****----
**---*----
**---*----
**--------
**-****---
**--**----
**--**----
-****-----
----------
----------
----------
)";

std::string h_upper = R"(
----------
***--***--
-**--**---
-**--**---
-******---
-**--**---
-**--**---
-**--**---
***--***--
----------
----------
----------
)";

std::string i_upper = R"(
----------
******----
--**------
--**------
--**------
--**------
--**------
--**------
******----
----------
----------
----------
)";

std::string j_upper = R"(
----------
-*******--
-----**---
-----**---
-----**---
-----**---
**---**---
**---**---
******----
----------
----------
----------
)";

std::string k_upper = R"(
----------
****-***--
-**--**---
-**-**----
-****-----
-*****----
-**--**---
-**--**---
****--**--
----------
----------
----------
)";

std::string l_upper = R"(
----------
****------
-**-------
-**-------
-**-------
-**-------
-**---*---
-**---*---
*******---
----------
----------
----------
)";

std::string m_upper = R"(
----------
***---***-
-***-***--
-***-***--
-*******--
-**-*-**--
-**-*-**--
-**---**--
****-****-
----------
----------
----------
)";

std::string n_upper = R"(
----------
***-****--
-**--**---
-***-**---
-***-**---
-**-***---
-**-***---
-**--**---
****-**---
----------
----------
----------
)";

std::string o_upper = R"(
----------
-****-----
**--**----
**--**----
**--**----
**--**----
**--**----
**--**----
-****-----
----------
----------
----------
)";

std::string p_upper = R"(
----------
******----
-**--**---
-**--**---
-**--**---
-*****----
-**-------
-**-------
****------
----------
----------
----------
)";

std::string q_upper = R"(
----------
-****-----
**--**----
**--**----
**--**----
**--**----
**--**----
**--**----
-****-----
--**-*----
--***-----
----------
)";

std::string r_upper = R"(
----------
******----
-**--**---
-**--**---
-**--**---
-*****----
-**-**----
-**--**---
****--**--
----------
----------
----------
)";

std::string s_upper = R"(
----------
-*****----
**--**----
**--------
-***------
--***-----
----**----
**--**----
*****-----
----------
----------
----------
)";

std::string t_upper = R"(
----------
******----
*-**-*----
*-**-*----
--**------
--**------
--**------
--**------
-****-----
----------
----------
----------
)";

std::string u_upper = R"(
----------
***--***--
-**--**---
-**--**---
-**--**---
-**--**---
-**--**---
-**--**---
--****----
----------
----------
----------
)";

std::string v_upper = R"(
----------
****-****-
-**---**--
-**---**--
--**-**---
--**-**---
--**-**---
---***----
---***----
----------
----------
----------
)";

std::string w_upper = R"(
----------
****-****-
-**---**--
-**-*-**--
-*******--
-***-***--
--**-**---
--**-**---
--**-**---
----------
----------
----------
)";

std::string x_upper = R"(
----------
***-****--
-**--**---
--****----
---**-----
---**-----
--****----
-**--**---
****-***--
----------
----------
----------
)";

std::string y_upper = R"(
----------
***-****--
-**--**---
--*--*----
--****----
---**-----
---**-----
---**-----
*******---
----------
----------
----------
)";

std::string z_upper = R"(
----------
******----
*---**----
*--**-----
--**------
--**------
-**--*----
**---*----
******----
----------
----------
----------
)";

std::string a_lower = R"(
----------
----------
----------
-****-----
----**----
-*****----
**--**----
**--**----
-******---
----------
----------
----------
)";

std::string b_lower = R"(
***-------
-**-------
-**-------
-**-**----
-***-**---
-**--**---
-**--**---
-***-**---
***-**----
----------
----------
----------
)";

// todo was working on this
std::string c_lower = R"(
----------
----------
----------
-*****----
**---*----
**---*----
**--------
**---*----
-****-----
----------
----------
----------
)";

std::string d_lower = R"(
---***----
----**----
----**----
-**-**----
**-***----
**--**----
**--**----
**-***----
-**-***---
----------
----------
----------
)";

std::string e_lower = R"(
----------
----------
----------
-****-----
**--**----
******----
**--------
**---*----
-****-----
----------
----------
----------
)";

std::string f_lower = R"(
---*****--
--**------
--**------
*******---
--**------
--**------
--**------
--**------
*******---
----------
----------
----------
)";

std::string g_lower = R"(
----------
----------
----------
-**-***---
**-***----
**--**----
**--**----
**-***----
-**-**----
----**----
----**----
-****-----
)";

std::string h_lower = R"(
***-------
-**-------
-**-------
-*****----
-**--**---
-**--**---
-**--**---
-**--**---
***--***--
----------
----------
----------
)";

std::string i_lower = R"(
--**------
--**------
----------
****------
--**------
--**------
--**------
--**------
******----
----------
----------
----------
)";

std::string j_lower = R"(
---**-----
---**-----
----------
******----
----**----
----**----
----**----
----**----
----**----
----**----
----**----
*****-----
)";

std::string k_lower = R"(
***-------
-**-------
-**-------
-**-***---
-**-**----
-****-----
-*****----
-**--**---
***-****--
----------
----------
----------
)";

std::string l_lower = R"(
-****-----
---**-----
---**-----
---**-----
---**-----
---**-----
---**-----
---**-----
********--
----------
----------
----------
)";

std::string m_lower = R"(
----------
----------
----------
********--
-**-**-**-
-**-**-**-
-**-**-**-
-**-**-**-
***-**-***
----------
----------
----------
)";

std::string n_lower = R"(
----------
----------
----------
******----
-**--**---
-**--**---
-**--**---
-**--**---
***--***--
----------
----------
----------
)";

std::string o_lower = R"(
----------
----------
----------
-****-----
**--**----
**--**----
**--**----
**--**----
-****-----
----------
----------
----------
)";

std::string p_lower = R"(
----------
----------
----------
***-**----
-***-**---
-**--**---
-**--**---
-***-**---
-**-**----
-**-------
-**-------
*****-----
)";

std::string q_lower = R"(
----------
----------
----------
-**-***---
**-***----
**--**----
**--**----
**-***----
-**-**----
----**----
----**----
--*****---
)";

std::string r_lower = R"(
----------
----------
----------
****-**---
--***-*---
--**--*---
--**------
--**------
*******---
----------
----------
----------
)";

std::string s_lower = R"(
----------
----------
----------
-*****----
**--**----
****------
--****----
**--**----
*****-----
----------
----------
----------
)";

std::string t_lower = R"(
----------
-**-------
-**-------
*****-----
-**-------
-**-------
-**-------
-**--*----
--***-----
----------
----------
----------
)";

std::string u_lower = R"(
----------
----------
----------
***-***---
-**--**---
-**--**---
-**--**---
-**--**---
--******--
----------
----------
----------
)";

std::string v_lower = R"(
----------
----------
----------
***-***---
-**-**----
-**-**----
-**-**----
--***-----
--***-----
----------
----------
----------
)";

std::string w_lower = R"(
----------
----------
----------
***---***-
-**-*-**--
-*******--
--**-**---
--**-**---
--*---*---
----------
----------
----------
)";

std::string x_lower = R"(
----------
----------
----------
***--***--
-**--**---
--****----
--****----
-**--**---
***--***--
----------
----------
----------
)";

std::string y_lower = R"(
----------
----------
----------
****-***--
-**--**---
-**--*----
--*-**----
--***-----
---**-----
--**------
--**------
*****-----
)";

std::string z_lower = R"(
----------
----------
----------
******----
*--**-----
--**------
-**-------
**---*----
******----
----------
----------
----------
)";

std::string exclamation = R"(
---*---
---*---
---*---
-------
---*---
)";

std::string question = R"(
-*****-
----*--
---*---
-------
---*---
)";

std::string hash = R"(
--*-*--
-*****-
--*-*--
-*****-
--*-*--
)";

std::string dollar = R"(
---*---
-*****-
-*-*---
-*****-
---*---
)";

std::string percent = R"(
-**--*-
-**-*--
---*---
--*-**-
-*--**-
)";

std::string plus = R"(
----------
----------
---*------
---*------
---*------
*******---
---*------
---*------
---*------
----------
----------
----------
)";

std::string minus = R"(
--**------
--**------
******----
-****-----
-****-----
-*--*-----
----------
----------
----------
----------
----------
----------
)";

std::string ampersand = R"(
----------
--****----
-**-------
-**-------
-**-------
****-**---
**-***----
**--**----
-******---
----------
----------
----------
)";

std::string asterisk = R"(
---*---
-*-*-*-
---*---
--*-*--
-*---*-
)";

std::string at_symbol = R"(
--***-----
-*---*----
*----*----
*--***----
*-*--*----
*-*--*----
*--***----
*---------
-*---*----
--***-----
----------
----------
)";

std::string period = R"(
----------
----------
----------
----------
----------
----------
----------
**--------
**--------
----------
----------
----------
)";

std::string comma = R"(
-------
-------
-------
--*----
-*-----
)";

std::string colon = R"(
-------
---*---
-------
---*---
-------
)";

std::string angle_bracket_left = R"(
----*--
---*---
--*----
---*---
----*--
)";

std::string angle_bracket_right = R"(
--*----
---*---
----*--
---*---
--*----
)";

std::string parenthesis_left = R"(
--***--
-*-----
-*-----
-*-----
--***--
)";

std::string parenthesis_right = R"(
--***--
-----*-
-----*-
-----*-
--***--
)";

std::unordered_map<char, std::string> character_to_text_grid = {{'0', zero},
                                                                {'1', one},
                                                                {'2', two},
                                                                {'3', three},
                                                                {'4', four},
                                                                {'5', five},
                                                                {'6', six},
                                                                {'7', seven},
                                                                {'8', eight},
                                                                {'9', nine},
                                                                {'A', a_upper},
                                                                {'B', b_upper},
                                                                {'C', c_upper},
                                                                {'D', d_upper},
                                                                {'E', e_upper},
                                                                {'F', f_upper},
                                                                {'G', g_upper},
                                                                {'H', h_upper},
                                                                {'I', i_upper},
                                                                {'J', j_upper},
                                                                {'K', k_upper},
                                                                {'L', l_upper},
                                                                {'M', m_upper},
                                                                {'N', n_upper},
                                                                {'O', o_upper},
                                                                {'P', p_upper},
                                                                {'Q', q_upper},
                                                                {'R', r_upper},
                                                                {'S', s_upper},
                                                                {'T', t_upper},
                                                                {'U', u_upper},
                                                                {'V', v_upper},
                                                                {'W', w_upper},
                                                                {'X', x_upper},
                                                                {'Y', y_upper},
                                                                {'Z', z_upper},
                                                                {'a', a_lower},
                                                                {'b', b_lower},
                                                                {'c', c_lower},
                                                                {'d', d_lower},
                                                                {'e', e_lower},
                                                                {'f', f_lower},
                                                                {'g', g_lower},
                                                                {'h', h_lower},
                                                                {'i', i_lower},
                                                                {'j', j_lower},
                                                                {'k', k_lower},
                                                                {'l', l_lower},
                                                                {'m', m_lower},
                                                                {'n', n_lower},
                                                                {'o', o_lower},
                                                                {'p', p_lower},
                                                                {'q', q_lower},
                                                                {'r', r_lower},
                                                                {'s', s_lower},
                                                                {'t', t_lower},
                                                                {'u', u_lower},
                                                                {'v', v_lower},
                                                                {'w', w_lower},
                                                                {'x', x_lower},
                                                                {'y', y_lower},
                                                                {'z', z_lower},
                                                                {'!', exclamation},
                                                                {'?', question},
                                                                {'#', hash},
                                                                {'$', dollar},
                                                                {'%', percent},
                                                                {'&', ampersand},
                                                                {'*', asterisk},
                                                                {'@', at_symbol},
                                                                {'+', plus},
                                                                {'-', minus},
                                                                {'.', period},
                                                                {',', comma},
                                                                {':', colon},
                                                                {'<', angle_bracket_left},
                                                                {'>', angle_bracket_right},
                                                                {'(', parenthesis_left},
                                                                {')', parenthesis_right}};

std::string strip_leading_newlines(const std::string &text) {
    size_t start = 0;
    while (start < text.size() && text[start] == '\n') {
        ++start;
    }
    return text.substr(start);
}

draw_info::IndexedVertexPositions text_grid_to_rect_grid(const std::string &text_grid,
                                                         const vertex_geometry::Rectangle bounding_rect) {
    unsigned int rows = 0;
    unsigned int cols = 0;

    // count rows and columns based on text_grid.
    std::vector<std::string> lines;
    std::string line;
    std::string cleaned_text_grid = strip_leading_newlines(text_grid);

    for (char c : cleaned_text_grid) {
        if (c == '\n') {
            lines.push_back(line);
            line.clear();
        } else {
            line += c;
        }
    }
    if (!line.empty())
        lines.push_back(line); // for the last line if there's no final newline.

    rows = lines.size();
    if (rows > 0) {
        cols = lines[0].length(); // assuming all rows have equal length.
    }

    // Initialize grid
    vertex_geometry::Grid grid(rows, cols, bounding_rect);

    std::vector<draw_info::IndexedVertexPositions> ivps;

    // iterate over the grid and collect indexed vertex positions for '*' characters.
    for (unsigned int row = 0; row < rows; ++row) {
        for (unsigned int col = 0; col < cols; ++col) {
            if (lines[row][col] == '*') {
                vertex_geometry::Rectangle rect = grid.get_at(col, row);
                vertex_geometry::IndexedVertices ivs = rect.get_ivs();
                draw_info::IndexedVertexPositions ivp(ivs.indices, ivs.vertices);
                ivps.push_back(ivp);
            }
        }
    }

    return vertex_geometry::merge_ivps(ivps);
}

draw_info::IndexedVertexPositions get_text_geometry(const std::string &text, vertex_geometry::Rectangle bounding_rect) {
    if (text.empty()) {
        return draw_info::IndexedVertexPositions(); // Return empty geometry
    }

    std::vector<draw_info::IndexedVertexPositions> character_ivps;
    character_ivps.reserve(text.size());

    // Character aspect ratio: width:height = 10:12
    const float char_aspect_ratio = 10.0f / 12.0f;

    // Calculate optimal character dimensions that fit within bounding rect
    float available_width = bounding_rect.width;
    float available_height = bounding_rect.height;

    // Method 1: Fit all characters horizontally first
    float char_width_horizontal = available_width / text.size();
    float char_height_horizontal = char_width_horizontal / char_aspect_ratio;

    // Method 2: Fit character height to available height
    float char_height_vertical = available_height;
    float char_width_vertical = char_height_vertical * char_aspect_ratio;
    float total_width_needed = char_width_vertical * text.size();

    // Choose the method that fits within bounds
    float final_char_width, final_char_height;
    if (char_height_horizontal <= available_height) {
        // Horizontal fitting works
        final_char_width = char_width_horizontal;
        final_char_height = char_height_horizontal;
    } else if (total_width_needed <= available_width) {
        // Vertical fitting works
        final_char_width = char_width_vertical;
        final_char_height = char_height_vertical;
    } else {
        // Neither fits perfectly, choose the one that maximizes character size
        if (char_width_horizontal * char_height_horizontal >= char_width_vertical * char_height_vertical) {
            final_char_width = char_width_horizontal;
            final_char_height = char_height_horizontal;
        } else {
            final_char_width = char_width_vertical;
            final_char_height = char_height_vertical;
        }
    }

    // Calculate starting position to center the text
    float total_text_width = final_char_width * text.size();
    float start_center_x = bounding_rect.center.x - (total_text_width / 2.0f) + (final_char_width / 2.0f);

    // Generate character rectangles
    for (size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];

        // Create character bounding rectangle
        vertex_geometry::Rectangle character_bounding_rect;
        character_bounding_rect.center.x = start_center_x + i * final_char_width;
        character_bounding_rect.center.y = bounding_rect.center.y;
        character_bounding_rect.center.z = bounding_rect.center.z; // Maintain z-coordinate
        character_bounding_rect.width = final_char_width;
        character_bounding_rect.height = final_char_height;

        // Convert character to geometry
        std::string text_grid = character_to_text_grid[ch];
        character_ivps.push_back(text_grid_to_rect_grid(text_grid, character_bounding_rect));
    }

    // Merge all character geometries
    return vertex_geometry::merge_ivps(character_ivps);
}

} // namespace grid_font
