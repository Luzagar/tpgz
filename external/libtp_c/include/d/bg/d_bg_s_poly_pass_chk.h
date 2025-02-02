#ifndef D_BG_D_BG_S_POLY_PASS_CHK_H
#define D_BG_D_BG_S_POLY_PASS_CHK_H

class cBgS_PolyPassChk {
public:
    void* vtable;
};

class dBgS_PolyPassChk : public cBgS_PolyPassChk {
public:
    dBgS_PolyPassChk() {
        mObject = false;
        mCamera = false;
        mLink = false;
        mArrow = false;
        mBomb = false;
        mBoomerang = false;
        mRope = false;
        mUnderwaterRoof = false;
        mHorse = false;
        mStatue = false;
        mIronBall = false;
    }

    bool ChkArrow() { return mArrow; }
    bool ChkBomb() { return mBomb; }
    bool ChkBoomerang() { return mBoomerang; }
    bool ChkCam() { return mCamera; }
    bool ChkHorse() { return mHorse; }
    bool ChkIronBall() { return mIronBall; }
    bool ChkLink() { return mLink; }
    bool ChkNoHorse();
    bool ChkObj() { return mObject; }
    bool ChkRope() { return mRope; }
    bool ChkStatue() { return mStatue; }
    bool ChkUnderwaterRoof() { return mUnderwaterRoof; }

private:
    bool mObject;
    bool mCamera;
    bool mLink;
    bool mArrow;
    bool mBomb;
    bool mBoomerang;
    bool mRope;
    bool mUnderwaterRoof;
    bool mHorse;
    bool mStatue;
    bool mIronBall;
};

#endif /* D_BG_D_BG_S_POLY_PASS_CHK_H */
