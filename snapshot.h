#pragma once

namespace majong
{
    class GameRoot;
    namespace context
    {
        class User;
    }

    namespace logic
    {
        namespace clientlogic
        {
            int Snapshot(GameRoot *root);
        }
    }
}
