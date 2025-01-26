#ifndef F_F_OP_SCENE_MNG_H_
#define F_F_OP_SCENE_MNG_H_

#include "f_pc/f_pc_manager.h"
#include "f_op/f_op_scene.h"

typedef struct base_process_class base_process_class;




LIBTP_DEFINE_FUNC(fopScnM_SearchByID__FUi, fopScnM_SearchByID_unsigned_int_,
                  scene_class*, fopScnM_SearchByID, (fpc_ProcID id))

#endif
