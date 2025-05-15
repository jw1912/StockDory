//
// Copyright (c) 2023 StockDory authors. See the list of authors for more details.
// Licensed under LGPL-3.0.
//

#ifndef STOCKDORY_SEARCHSTATE_H
#define STOCKDORY_SEARCHSTATE_H

#include "../Backend/Type/Move.h"
#include "../Backend/Type/Zobrist.h"

namespace StockDory
{

    enum SearchStateType : uint8_t
    {

        Exact,
        BetaCutoff,
        AlphaUnchanged,
        Invalid

    };

    using TinyZobristHash = uint32_t;

    struct SearchState
    {

        TinyZobristHash Hash       = 0;
        int32_t         Evaluation = 0;
        Move            Move       = ::Move();
        uint8_t         Depth      = 0;
        SearchStateType Type       = Invalid;

    };

} // StockDory

#endif //STOCKDORY_SEARCHSTATE_H
