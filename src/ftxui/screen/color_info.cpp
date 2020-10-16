#include "ftxui/screen/color_info.hpp"

namespace ftxui {

// clang-format off
const ColorInfo palette256[] = {
     {"Black"              , 0   , 0  , 0   , 0   , 0   , 0   , 0   , 0   } ,
     {"Red"                , 1   , 1  , 128 , 0   , 0   , 0   , 255 , 128 } ,
     {"Green"              , 2   , 2  , 0   , 128 , 0   , 85  , 255 , 128 } ,
     {"Yellow"             , 3   , 3  , 128 , 128 , 0   , 43  , 255 , 128 } ,
     {"Blue"               , 4   , 4  , 0   , 0   , 128 , 171 , 255 , 128 } ,
     {"Magenta"            , 5   , 5  , 128 , 0   , 128 , 213 , 255 , 128 } ,
     {"Cyan"               , 6   , 6  , 0   , 128 , 128 , 128 , 255 , 128 } ,
     {"GrayLight"          , 7   , 7  , 192 , 192 , 192 , 0   , 0   , 192 } ,
     {"GrayDark"           , 8   , 8  , 128 , 128 , 128 , 0   , 0   , 128 } ,
     {"RedLight"           , 9   , 9  , 255 , 0   , 0   , 0   , 255 , 255 } ,
     {"GreenLight"         , 10  , 10 , 0   , 255 , 0   , 85  , 255 , 255 } ,
     {"YellowLight"        , 11  , 11 , 255 , 255 , 0   , 43  , 255 , 255 } ,
     {"BlueLight"          , 12  , 12 , 0   , 0   , 255 , 171 , 255 , 255 } ,
     {"MagentaLight"       , 13  , 13 , 255 , 0   , 255 , 213 , 255 , 255 } ,
     {"CyanLight"          , 14  , 14 , 0   , 255 , 255 , 128 , 255 , 255 } ,
     {"White"              , 15  , 15 , 255 , 255 , 255 , 0   , 0   , 255 } ,
     {"Grey0"              , 16  , 0  , 0   , 0   , 0   , 0   , 0   , 0   } ,
     {"NavyBlue"           , 17  , 4  , 0   , 0   , 95  , 171 , 255 , 95  } ,
     {"DarkBlue"           , 18  , 4  , 0   , 0   , 135 , 171 , 255 , 135 } ,
     {"Blue3"              , 19  , 4  , 0   , 0   , 175 , 171 , 255 , 175 } ,
     {"Blue3Bis"           , 20  , 12 , 0   , 0   , 215 , 171 , 255 , 215 } ,
     {"Blue1"              , 21  , 12 , 0   , 0   , 255 , 171 , 255 , 255 } ,
     {"DarkGreen"          , 22  , 2  , 0   , 95  , 0   , 85  , 255 , 95  } ,
     {"DeepSkyBlue4"       , 23  , 6  , 0   , 95  , 95  , 128 , 255 , 95  } ,
     {"DeepSkyBlue4Bis"    , 24  , 6  , 0   , 95  , 135 , 141 , 255 , 135 } ,
     {"DeepSkyBlue4Ter"    , 25  , 6  , 0   , 95  , 175 , 148 , 255 , 175 } ,
     {"DodgerBlue3"        , 26  , 12 , 0   , 95  , 215 , 152 , 255 , 215 } ,
     {"DodgerBlue2"        , 27  , 12 , 0   , 95  , 255 , 155 , 255 , 255 } ,
     {"Green4"             , 28  , 2  , 0   , 135 , 0   , 85  , 255 , 135 } ,
     {"SpringGreen4"       , 29  , 6  , 0   , 135 , 95  , 115 , 255 , 135 } ,
     {"Turquoise4"         , 30  , 6  , 0   , 135 , 135 , 128 , 255 , 135 } ,
     {"DeepSkyBlue3"       , 31  , 6  , 0   , 135 , 175 , 138 , 255 , 175 } ,
     {"DeepSkyBlue3Bis"    , 32  , 14 , 0   , 135 , 215 , 144 , 255 , 215 } ,
     {"DodgerBlue1"        , 33  , 14 , 0   , 135 , 255 , 149 , 255 , 255 } ,
     {"Green3"             , 34  , 2  , 0   , 175 , 0   , 85  , 255 , 175 } ,
     {"SpringGreen3"       , 35  , 6  , 0   , 175 , 95  , 108 , 255 , 175 } ,
     {"DarkCyan"           , 36  , 6  , 0   , 175 , 135 , 118 , 255 , 175 } ,
     {"LightSeaGreen"      , 37  , 6  , 0   , 175 , 175 , 128 , 255 , 175 } ,
     {"DeepSkyBlue2"       , 38  , 14 , 0   , 175 , 215 , 136 , 255 , 215 } ,
     {"DeepSkyBlue1"       , 39  , 14 , 0   , 175 , 255 , 142 , 255 , 255 } ,
     {"Green3Bis"          , 40  , 10 , 0   , 215 , 0   , 85  , 255 , 215 } ,
     {"SpringGreen3Bis"    , 41  , 10 , 0   , 215 , 95  , 104 , 255 , 215 } ,
     {"SpringGreen2"       , 42  , 14 , 0   , 215 , 135 , 112 , 255 , 215 } ,
     {"Cyan3"              , 43  , 14 , 0   , 215 , 175 , 120 , 255 , 215 } ,
     {"DarkTurquoise"      , 44  , 14 , 0   , 215 , 215 , 128 , 255 , 215 } ,
     {"Turquoise2"         , 45  , 14 , 0   , 215 , 255 , 135 , 255 , 255 } ,
     {"Green1"             , 46  , 10 , 0   , 255 , 0   , 85  , 255 , 255 } ,
     {"SpringGreen2Bis"    , 47  , 10 , 0   , 255 , 95  , 101 , 255 , 255 } ,
     {"SpringGreen1"       , 48  , 14 , 0   , 255 , 135 , 107 , 255 , 255 } ,
     {"MediumSpringGreen"  , 49  , 14 , 0   , 255 , 175 , 114 , 255 , 255 } ,
     {"Cyan2"              , 50  , 14 , 0   , 255 , 215 , 121 , 255 , 255 } ,
     {"Cyan1"              , 51  , 14 , 0   , 255 , 255 , 128 , 255 , 255 } ,
     {"DarkRed"            , 52  , 1  , 95  , 0   , 0   , 0   , 255 , 95  } ,
     {"DeepPink4Ter"       , 53  , 5  , 95  , 0   , 95  , 213 , 255 , 95  } ,
     {"Purple4"            , 54  , 5  , 95  , 0   , 135 , 201 , 255 , 135 } ,
     {"Purple4Bis"         , 55  , 5  , 95  , 0   , 175 , 194 , 255 , 175 } ,
     {"Purple3"            , 56  , 12 , 95  , 0   , 215 , 190 , 255 , 215 } ,
     {"BlueViolet"         , 57  , 12 , 95  , 0   , 255 , 187 , 255 , 255 } ,
     {"Orange4"            , 58  , 3  , 95  , 95  , 0   , 43  , 255 , 95  } ,
     {"Grey37"             , 59  , 8  , 95  , 95  , 95  , 0   , 0   , 95  } ,
     {"MediumPurple4"      , 60  , 4  , 95  , 95  , 135 , 171 , 75  , 135 } ,
     {"SlateBlue3"         , 61  , 4  , 95  , 95  , 175 , 171 , 116 , 175 } ,
     {"SlateBlue3Bis"      , 62  , 12 , 95  , 95  , 215 , 171 , 142 , 215 } ,
     {"RoyalBlue1"         , 63  , 12 , 95  , 95  , 255 , 171 , 160 , 255 } ,
     {"Chartreuse4"        , 64  , 3  , 95  , 135 , 0   , 55  , 255 , 135 } ,
     {"DarkSeaGreen4"      , 65  , 8  , 95  , 135 , 95  , 85  , 75  , 135 } ,
     {"PaleTurquoise4"     , 66  , 6  , 95  , 135 , 135 , 128 , 75  , 135 } ,
     {"SteelBlue"          , 67  , 4  , 95  , 135 , 175 , 150 , 116 , 175 } ,
     {"SteelBlue3"         , 68  , 12 , 95  , 135 , 215 , 157 , 142 , 215 } ,
     {"CornflowerBlue"     , 69  , 12 , 95  , 135 , 255 , 161 , 160 , 255 } ,
     {"Chartreuse3"        , 70  , 3  , 95  , 175 , 0   , 62  , 255 , 175 } ,
     {"DarkSeaGreen4Bis"   , 71  , 2  , 95  , 175 , 95  , 85  , 116 , 175 } ,
     {"CadetBlue"          , 72  , 2  , 95  , 175 , 135 , 106 , 116 , 175 } ,
     {"CadetBlueBis"       , 73  , 6  , 95  , 175 , 175 , 128 , 116 , 175 } ,
     {"SkyBlue3"           , 74  , 14 , 95  , 175 , 215 , 143 , 142 , 215 } ,
     {"SteelBlue1"         , 75  , 12 , 95  , 175 , 255 , 150 , 160 , 255 } ,
     {"Chartreuse3Bis"     , 76  , 10 , 95  , 215 , 0   , 66  , 255 , 215 } ,
     {"PaleGreen3Bis"      , 77  , 10 , 95  , 215 , 95  , 85  , 142 , 215 } ,
     {"SeaGreen3"          , 78  , 10 , 95  , 215 , 135 , 99  , 142 , 215 } ,
     {"Aquamarine3"        , 79  , 14 , 95  , 215 , 175 , 113 , 142 , 215 } ,
     {"MediumTurquoise"    , 80  , 14 , 95  , 215 , 215 , 128 , 142 , 215 } ,
     {"SteelBlue1Bis"      , 81  , 14 , 95  , 215 , 255 , 139 , 160 , 255 } ,
     {"Chartreuse2Bis"     , 82  , 10 , 95  , 255 , 0   , 69  , 255 , 255 } ,
     {"SeaGreen2"          , 83  , 10 , 95  , 255 , 95  , 85  , 160 , 255 } ,
     {"SeaGreen1"          , 84  , 10 , 95  , 255 , 135 , 95  , 160 , 255 } ,
     {"SeaGreen1Bis"       , 85  , 10 , 95  , 255 , 175 , 106 , 160 , 255 } ,
     {"Aquamarine1Bis"     , 86  , 14 , 95  , 255 , 215 , 117 , 160 , 255 } ,
     {"DarkSlateGray2"     , 87  , 14 , 95  , 255 , 255 , 128 , 160 , 255 } ,
     {"DarkRedBis"         , 88  , 1  , 135 , 0   , 0   , 0   , 255 , 135 } ,
     {"DeepPink4Bis"       , 89  , 5  , 135 , 0   , 95  , 226 , 255 , 135 } ,
     {"DarkMagenta"        , 90  , 5  , 135 , 0   , 135 , 213 , 255 , 135 } ,
     {"DarkMagentaBis"     , 91  , 5  , 135 , 0   , 175 , 204 , 255 , 175 } ,
     {"DarkVioletBis"      , 92  , 13 , 135 , 0   , 215 , 198 , 255 , 215 } ,
     {"PurpleBis"          , 93  , 13 , 135 , 0   , 255 , 193 , 255 , 255 } ,
     {"Orange4Bis"         , 94  , 3  , 135 , 95  , 0   , 30  , 255 , 135 } ,
     {"LightPink4"         , 95  , 8  , 135 , 95  , 95  , 0   , 75  , 135 } ,
     {"Plum4"              , 96  , 5  , 135 , 95  , 135 , 213 , 75  , 135 } ,
     {"MediumPurple3"      , 97  , 4  , 135 , 95  , 175 , 192 , 116 , 175 } ,
     {"MediumPurple3Bis"   , 98  , 12 , 135 , 95  , 215 , 185 , 142 , 215 } ,
     {"SlateBlue1"         , 99  , 12 , 135 , 95  , 255 , 181 , 160 , 255 } ,
     {"Yellow4"            , 100 , 3  , 135 , 135 , 0   , 43  , 255 , 135 } ,
     {"Wheat4"             , 101 , 8  , 135 , 135 , 95  , 43  , 75  , 135 } ,
     {"Grey53"             , 102 , 8  , 135 , 135 , 135 , 0   , 0   , 135 } ,
     {"LightSlateGrey"     , 103 , 4  , 135 , 135 , 175 , 171 , 58  , 175 } ,
     {"MediumPurple"       , 104 , 12 , 135 , 135 , 215 , 171 , 94  , 215 } ,
     {"LightSlateBlue"     , 105 , 12 , 135 , 135 , 255 , 171 , 120 , 255 } ,
     {"Yellow4Bis"         , 106 , 3  , 135 , 175 , 0   , 52  , 255 , 175 } ,
     {"DarkOliveGreen3"    , 107 , 7  , 135 , 175 , 95  , 64  , 116 , 175 } ,
     {"DarkSeaGreen"       , 108 , 7  , 135 , 175 , 135 , 85  , 58  , 175 } ,
     {"LightSkyBlue3"      , 109 , 7  , 135 , 175 , 175 , 128 , 58  , 175 } ,
     {"LightSkyBlue3Bis"   , 110 , 12 , 135 , 175 , 215 , 150 , 94  , 215 } ,
     {"SkyBlue2"           , 111 , 12 , 135 , 175 , 255 , 157 , 120 , 255 } ,
     {"Chartreuse2"        , 112 , 11 , 135 , 215 , 0   , 58  , 255 , 215 } ,
     {"DarkOliveGreen3Bis" , 113 , 10 , 135 , 215 , 95  , 71  , 142 , 215 } ,
     {"PaleGreen3"         , 114 , 7  , 135 , 215 , 135 , 85  , 94  , 215 } ,
     {"DarkSeaGreen3"      , 115 , 10 , 135 , 215 , 175 , 106 , 94  , 215 } ,
     {"DarkSlateGray3"     , 116 , 14 , 135 , 215 , 215 , 128 , 94  , 215 } ,
     {"SkyBlue1"           , 117 , 14 , 135 , 215 , 255 , 143 , 120 , 255 } ,
     {"Chartreuse1"        , 118 , 11 , 135 , 255 , 0   , 63  , 255 , 255 } ,
     {"LightGreen"         , 119 , 10 , 135 , 255 , 95  , 75  , 160 , 255 } ,
     {"LightGreenBis"      , 120 , 10 , 135 , 255 , 135 , 85  , 120 , 255 } ,
     {"PaleGreen1"         , 121 , 10 , 135 , 255 , 175 , 99  , 120 , 255 } ,
     {"Aquamarine1"        , 122 , 14 , 135 , 255 , 215 , 113 , 120 , 255 } ,
     {"DarkSlateGray1"     , 123 , 14 , 135 , 255 , 255 , 128 , 120 , 255 } ,
     {"Red3"               , 124 , 1  , 175 , 0   , 0   , 0   , 255 , 175 } ,
     {"DeepPink4"          , 125 , 5  , 175 , 0   , 95  , 233 , 255 , 175 } ,
     {"MediumVioletRed"    , 126 , 5  , 175 , 0   , 135 , 223 , 255 , 175 } ,
     {"Magenta3"           , 127 , 5  , 175 , 0   , 175 , 213 , 255 , 175 } ,
     {"DarkViolet"         , 128 , 13 , 175 , 0   , 215 , 206 , 255 , 215 } ,
     {"Purple"             , 129 , 13 , 175 , 0   , 255 , 200 , 255 , 255 } ,
     {"DarkOrange3"        , 130 , 3  , 175 , 95  , 0   , 23  , 255 , 175 } ,
     {"IndianRed"          , 131 , 7  , 175 , 95  , 95  , 0   , 116 , 175 } ,
     {"HotPink3"           , 132 , 5  , 175 , 95  , 135 , 235 , 116 , 175 } ,
     {"MediumOrchid3"      , 133 , 5  , 175 , 95  , 175 , 213 , 116 , 175 } ,
     {"MediumOrchid"       , 134 , 13 , 175 , 95  , 215 , 199 , 142 , 215 } ,
     {"MediumPurple2"      , 135 , 12 , 175 , 95  , 255 , 192 , 160 , 255 } ,
     {"DarkGoldenrod"      , 136 , 3  , 175 , 135 , 0   , 33  , 255 , 175 } ,
     {"LightSalmon3"       , 137 , 7  , 175 , 135 , 95  , 21  , 116 , 175 } ,
     {"RosyBrown"          , 138 , 7  , 175 , 135 , 135 , 0   , 58  , 175 } ,
     {"Grey63"             , 139 , 5  , 175 , 135 , 175 , 213 , 58  , 175 } ,
     {"MediumPurple2Bis"   , 140 , 12 , 175 , 135 , 215 , 192 , 94  , 215 } ,
     {"MediumPurple1"      , 141 , 12 , 175 , 135 , 255 , 185 , 120 , 255 } ,
     {"Gold3"              , 142 , 3  , 175 , 175 , 0   , 43  , 255 , 175 } ,
     {"DarkKhaki"          , 143 , 7  , 175 , 175 , 95  , 43  , 116 , 175 } ,
     {"NavajoWhite3"       , 144 , 7  , 175 , 175 , 135 , 43  , 58  , 175 } ,
     {"Grey69"             , 145 , 7  , 175 , 175 , 175 , 0   , 0   , 175 } ,
     {"LightSteelBlue3"    , 146 , 12 , 175 , 175 , 215 , 171 , 47  , 215 } ,
     {"LightSteelBlue"     , 147 , 12 , 175 , 175 , 255 , 171 , 80  , 255 } ,
     {"Yellow3"            , 148 , 11 , 175 , 215 , 0   , 50  , 255 , 215 } ,
     {"DarkOliveGreen3Ter" , 149 , 11 , 175 , 215 , 95  , 57  , 142 , 215 } ,
     {"DarkSeaGreen3Bis"   , 150 , 7  , 175 , 215 , 135 , 64  , 94  , 215 } ,
     {"DarkSeaGreen2"      , 151 , 7  , 175 , 215 , 175 , 85  , 47  , 215 } ,
     {"LightCyan3"         , 152 , 7  , 175 , 215 , 215 , 128 , 47  , 215 } ,
     {"LightSkyBlue1"      , 153 , 12 , 175 , 215 , 255 , 150 , 80  , 255 } ,
     {"GreenYellow"        , 154 , 11 , 175 , 255 , 0   , 56  , 255 , 255 } ,
     {"DarkOliveGreen2"    , 155 , 10 , 175 , 255 , 95  , 64  , 160 , 255 } ,
     {"PaleGreen1Bis"      , 156 , 10 , 175 , 255 , 135 , 71  , 120 , 255 } ,
     {"DarkSeaGreen2Bis"   , 157 , 15 , 175 , 255 , 175 , 85  , 80  , 255 } ,
     {"DarkSeaGreen1"      , 158 , 15 , 175 , 255 , 215 , 106 , 80  , 255 } ,
     {"PaleTurquoise1"     , 159 , 14 , 175 , 255 , 255 , 128 , 80  , 255 } ,
     {"Red3Bis"            , 160 , 9  , 215 , 0   , 0   , 0   , 255 , 215 } ,
     {"DeepPink3"          , 161 , 13 , 215 , 0   , 95  , 237 , 255 , 215 } ,
     {"DeepPink3Bis"       , 162 , 13 , 215 , 0   , 135 , 229 , 255 , 215 } ,
     {"Magenta3Bis"        , 163 , 13 , 215 , 0   , 175 , 221 , 255 , 215 } ,
     {"Magenta3Ter"        , 164 , 13 , 215 , 0   , 215 , 213 , 255 , 215 } ,
     {"Magenta2"           , 165 , 13 , 215 , 0   , 255 , 207 , 255 , 255 } ,
     {"DarkOrange3Bis"     , 166 , 9  , 215 , 95  , 0   , 19  , 255 , 215 } ,
     {"IndianRedBis"       , 167 , 9  , 215 , 95  , 95  , 0   , 142 , 215 } ,
     {"HotPink3Bis"        , 168 , 13 , 215 , 95  , 135 , 242 , 142 , 215 } ,
     {"HotPink2"           , 169 , 13 , 215 , 95  , 175 , 228 , 142 , 215 } ,
     {"Orchid"             , 170 , 13 , 215 , 95  , 215 , 213 , 142 , 215 } ,
     {"MediumOrchid1"      , 171 , 13 , 215 , 95  , 255 , 203 , 160 , 255 } ,
     {"Orange3"            , 172 , 11 , 215 , 135 , 0   , 27  , 255 , 215 } ,
     {"LightSalmon3"       , 173 , 9  , 215 , 135 , 95  , 14  , 142 , 215 } ,
     {"LightPink3"         , 174 , 7  , 215 , 135 , 135 , 0   , 94  , 215 } ,
     {"Pink3"              , 175 , 13 , 215 , 135 , 175 , 235 , 94  , 215 } ,
     {"Plum3"              , 176 , 13 , 215 , 135 , 215 , 213 , 94  , 215 } ,
     {"Violet"             , 177 , 13 , 215 , 135 , 255 , 199 , 120 , 255 } ,
     {"Gold3Bis"           , 178 , 11 , 215 , 175 , 0   , 35  , 255 , 215 } ,
     {"LightGoldenrod3"    , 179 , 11 , 215 , 175 , 95  , 28  , 142 , 215 } ,
     {"Tan"                , 180 , 7  , 215 , 175 , 135 , 21  , 94  , 215 } ,
     {"MistyRose3"         , 181 , 7  , 215 , 175 , 175 , 0   , 47  , 215 } ,
     {"Thistle3"           , 182 , 13 , 215 , 175 , 215 , 213 , 47  , 215 } ,
     {"Plum2"              , 183 , 12 , 215 , 175 , 255 , 192 , 80  , 255 } ,
     {"Yellow3Bis"         , 184 , 11 , 215 , 215 , 0   , 43  , 255 , 215 } ,
     {"Khaki3"             , 185 , 11 , 215 , 215 , 95  , 43  , 142 , 215 } ,
     {"LightGoldenrod2"    , 186 , 7  , 215 , 215 , 135 , 43  , 94  , 215 } ,
     {"LightYellow3"       , 187 , 7  , 215 , 215 , 175 , 43  , 47  , 215 } ,
     {"Grey84"             , 188 , 7  , 215 , 215 , 215 , 0   , 0   , 215 } ,
     {"LightSteelBlue1"    , 189 , 12 , 215 , 215 , 255 , 171 , 40  , 255 } ,
     {"Yellow2"            , 190 , 11 , 215 , 255 , 0   , 49  , 255 , 255 } ,
     {"DarkOliveGreen1"    , 191 , 11 , 215 , 255 , 95  , 53  , 160 , 255 } ,
     {"DarkOliveGreen1Bis" , 192 , 11 , 215 , 255 , 135 , 57  , 120 , 255 } ,
     {"DarkSeaGreen1Bis"   , 193 , 15 , 215 , 255 , 175 , 64  , 80  , 255 } ,
     {"Honeydew2"          , 194 , 15 , 215 , 255 , 215 , 85  , 40  , 255 } ,
     {"LightCyan1Bis"      , 195 , 15 , 215 , 255 , 255 , 128 , 40  , 255 } ,
     {"Red1"               , 196 , 9  , 255 , 0   , 0   , 0   , 255 , 255 } ,
     {"DeepPink2"          , 197 , 13 , 255 , 0   , 95  , 240 , 255 , 255 } ,
     {"DeepPink1"          , 198 , 13 , 255 , 0   , 135 , 234 , 255 , 255 } ,
     {"DeepPink1Bis"       , 199 , 13 , 255 , 0   , 175 , 227 , 255 , 255 } ,
     {"Magenta2Bis"        , 200 , 13 , 255 , 0   , 215 , 220 , 255 , 255 } ,
     {"Magenta1"           , 201 , 13 , 255 , 0   , 255 , 213 , 255 , 255 } ,
     {"OrangeRed1"         , 202 , 9  , 255 , 95  , 0   , 16  , 255 , 255 } ,
     {"IndianRed1"         , 203 , 9  , 255 , 95  , 95  , 0   , 160 , 255 } ,
     {"IndianRed1Bis"      , 204 , 13 , 255 , 95  , 135 , 246 , 160 , 255 } ,
     {"HotPink"            , 205 , 13 , 255 , 95  , 175 , 235 , 160 , 255 } ,
     {"HotPinkBis"         , 206 , 13 , 255 , 95  , 215 , 224 , 160 , 255 } ,
     {"MediumOrchid1Bis"   , 207 , 13 , 255 , 95  , 255 , 213 , 160 , 255 } ,
     {"DarkOrange"         , 208 , 11 , 255 , 135 , 0   , 22  , 255 , 255 } ,
     {"Salmon1"            , 209 , 9  , 255 , 135 , 95  , 10  , 160 , 255 } ,
     {"LightCoral"         , 210 , 15 , 255 , 135 , 135 , 0   , 120 , 255 } ,
     {"PaleVioletRed1"     , 211 , 13 , 255 , 135 , 175 , 242 , 120 , 255 } ,
     {"Orchid2"            , 212 , 13 , 255 , 135 , 215 , 228 , 120 , 255 } ,
     {"Orchid1"            , 213 , 13 , 255 , 135 , 255 , 213 , 120 , 255 } ,
     {"Orange1"            , 214 , 11 , 255 , 175 , 0   , 29  , 255 , 255 } ,
     {"SandyBrown"         , 215 , 9  , 255 , 175 , 95  , 21  , 160 , 255 } ,
     {"LightSalmon1"       , 216 , 15 , 255 , 175 , 135 , 14  , 120 , 255 } ,
     {"LightPink1"         , 217 , 15 , 255 , 175 , 175 , 0   , 80  , 255 } ,
     {"Pink1"              , 218 , 13 , 255 , 175 , 215 , 235 , 80  , 255 } ,
     {"Plum1"              , 219 , 13 , 255 , 175 , 255 , 213 , 80  , 255 } ,
     {"Gold1"              , 220 , 11 , 255 , 215 , 0   , 36  , 255 , 255 } ,
     {"LightGoldenrod2Bis" , 221 , 11 , 255 , 215 , 95  , 32  , 160 , 255 } ,
     {"LightGoldenrod2Ter" , 222 , 15 , 255 , 215 , 135 , 28  , 120 , 255 } ,
     {"NavajoWhite1"       , 223 , 15 , 255 , 215 , 175 , 21  , 80  , 255 } ,
     {"MistyRose1"         , 224 , 15 , 255 , 215 , 215 , 0   , 40  , 255 } ,
     {"Thistle1"           , 225 , 13 , 255 , 215 , 255 , 213 , 40  , 255 } ,
     {"Yellow1"            , 226 , 11 , 255 , 255 , 0   , 43  , 255 , 255 } ,
     {"LightGoldenrod1"    , 227 , 11 , 255 , 255 , 95  , 43  , 160 , 255 } ,
     {"Khaki1"             , 228 , 15 , 255 , 255 , 135 , 43  , 120 , 255 } ,
     {"Wheat1"             , 229 , 15 , 255 , 255 , 175 , 43  , 80  , 255 } ,
     {"Cornsilk1"          , 230 , 15 , 255 , 255 , 215 , 43  , 40  , 255 } ,
     {"Grey100"            , 231 , 15 , 255 , 255 , 255 , 0   , 0   , 255 } ,
     {"Grey3"              , 232 , 0  , 8   , 8   , 8   , 0   , 0   , 8   } ,
     {"Grey7"              , 233 , 0  , 18  , 18  , 18  , 0   , 0   , 18  } ,
     {"Grey11"             , 234 , 0  , 28  , 28  , 28  , 0   , 0   , 28  } ,
     {"Grey15"             , 235 , 0  , 38  , 38  , 38  , 0   , 0   , 38  } ,
     {"Grey19"             , 236 , 0  , 48  , 48  , 48  , 0   , 0   , 48  } ,
     {"Grey23"             , 237 , 0  , 58  , 58  , 58  , 0   , 0   , 58  } ,
     {"Grey27"             , 238 , 8  , 68  , 68  , 68  , 0   , 0   , 68  } ,
     {"Grey30"             , 239 , 8  , 78  , 78  , 78  , 0   , 0   , 78  } ,
     {"Grey35"             , 240 , 8  , 88  , 88  , 88  , 0   , 0   , 88  } ,
     {"Grey39"             , 241 , 8  , 98  , 98  , 98  , 0   , 0   , 98  } ,
     {"Grey42"             , 242 , 8  , 108 , 108 , 108 , 0   , 0   , 108 } ,
     {"Grey46"             , 243 , 8  , 118 , 118 , 118 , 0   , 0   , 118 } ,
     {"Grey50"             , 244 , 8  , 128 , 128 , 128 , 0   , 0   , 128 } ,
     {"Grey54"             , 245 , 8  , 138 , 138 , 138 , 0   , 0   , 138 } ,
     {"Grey58"             , 246 , 8  , 148 , 148 , 148 , 0   , 0   , 148 } ,
     {"Grey62"             , 247 , 8  , 158 , 158 , 158 , 0   , 0   , 158 } ,
     {"Grey66"             , 248 , 7  , 168 , 168 , 168 , 0   , 0   , 168 } ,
     {"Grey70"             , 249 , 7  , 178 , 178 , 178 , 0   , 0   , 178 } ,
     {"Grey74"             , 250 , 7  , 188 , 188 , 188 , 0   , 0   , 188 } ,
     {"Grey78"             , 251 , 7  , 198 , 198 , 198 , 0   , 0   , 198 } ,
     {"Grey82"             , 252 , 7  , 208 , 208 , 208 , 0   , 0   , 208 } ,
     {"Grey85"             , 253 , 7  , 218 , 218 , 218 , 0   , 0   , 218 } ,
     {"Grey89"             , 254 , 15 , 228 , 228 , 228 , 0   , 0   , 228 } ,
     {"Grey93"             , 255 , 15 , 238 , 238 , 238 , 0   , 0   , 238 } ,
} ;

ColorInfo GetColorInfo(Color::Palette256 index) {
  return palette256[int(index)];
}

ColorInfo GetColorInfo(Color::Palette16 index) {
  return palette256[int(index)];
}
// clang-format off

}

// Copyright 2020 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.
