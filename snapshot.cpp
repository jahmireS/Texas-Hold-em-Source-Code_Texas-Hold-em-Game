#include "snapshot.h"
#include "../clientlogic.h"
#include "common/icard.h"
#include "gameroot.h"
#include "majong.pb.h"
#include "logic/gamelogic/gamelogic.h"
#include "context/context.h"
#include "context/user.h"
#include "process/process.h"
#include "process/dealer.h"
#include "message/sendclientmessage.h"

namespace majong
{
    namespace logic
    {
        namespace clientlogic
        {
            int Snapshot(GameRoot *root)
            {
                XGameMJProto::SnapshotRsp rsp;
                root->pro->Snapshot(rsp);
                DLOG_TRACE("\nrsp:" << rsp.DebugString())
                message::sendAllClientMessage((int)XGameMJProto::EMsgID::EmiSnapshot, rsp, root);
                return 0;
            }
        }
    }
}
