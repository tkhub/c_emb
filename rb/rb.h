////////////////////////////////////////////////////////////////////////////////
/// @file           rb.h
/// @brief          汎用リングバッファライブラリ
/// @author         T.Ino
/// @date           2019.12.4
/// $Version:       V1.0$
/// $Revision:      R0.0$
/// @note           ファイルに備考などを明記する場合はここへ書き込む
/// @attention      ファイルに注意書きなどを明記する場合はここへ書き込む
/// @par            History
///                 Borne
///
/// Copyright (c) YYYY Sample Inc. All Rights reserved.
///
/// - 本ソフトウェアの一部又は全てを無断で複写複製（コピー）することは、
///   著作権侵害にあたりますので、これを禁止します。
/// - 本製品の使用に起因する侵害または特許権その他権利の侵害に関しては
///   当社は一切その責任を負いません。
///
////////////////////////////////////////////////////////////////////////////////

#ifndef     __RB_H__
#define     __RB_H__

/*****************************************************************************/
/*****************************************************************************/
/*  ヘッダファイルのインクルード                                              */
/*****************************************************************************/
/*****************************************************************************/
#include "../comm/typedef.h"

/*****************************************************************************/
/*****************************************************************************/
/* 型定義                                                                    */
/*****************************************************************************/
/*****************************************************************************/

////////////////////////////////////////////////////////////////////////////////
/// @typedef    typedef名
/// @brief      typedefの説明
///
////////////////////////////////////////////////////////////////////////////////



/*****************************************************************************/
/*****************************************************************************/
/* マクロ */
/*****************************************************************************/
/*****************************************************************************/
/////////////////////////////////////////////////////////////////////////////////
/// @def        define名
/// @brief      defineの説明
///
////////////////////////////////////////////////////////////////////////////////

/*****************************************************************************/
/*****************************************************************************/
/* クラス */
/*****************************************************************************/
/*****************************************************************************/

///////////////////////////////////////////////////////////////////////////////
/// @class      class名
/// @brief      classの説明
///
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/// @struct     構造体名
/// @brief      構造体の説明
///
////////////////////////////////////////////////////////////////////////////////
typedef struct
{
    u2  u2_head;
    u2  u2_tail;
    u2  u2_size;
    s2  s2_use;
    u1  u1_state;
} st_lib_;

////////////////////////////////////////////////////////////////////////////////
/// @enum       enum型名
/// @brief      enum型の説明
///
////////////////////////////////////////////////////////////////////////////////

/**
 * "__GLOBAL_DEFINE__"を定義した場合、externが消える
 * 宣言したいCファイルでのみ"__GLOBAL_DEFINE__"を先に#defineして使用する。
 * その他のファイルでは"__GLOBAL_DEFINE__"をつけないで使う
 *
 */
#ifdef      __GLOBAL_DEFINE__
///     __GLOBALの後ろは空っぽ
#define     __GLOBAL
#else       /* __GLOBAL_DEFINE__ */
///     __GLOBALをexternで置換する
#define     __GLOBAL    extern
#endif      /* __GLOBAL_DEFINE__ */


/*****************************************************************************/
/*      グローバル関数・変数の宣言                                             */
/*****************************************************************************/
/** How to USE? **/
/*
__GLOBAL void   vdg_layname_modname_funcname(void)
__GLOBAL u16    u16g_layname_modname_ramname
*/

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
/* 関数定義 */
/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/


/*****************************************************************************/
/*****************************************************************************/
/* 変数定義 */
/*****************************************************************************/
/*****************************************************************************/

////////////////////////////////////////////////////////////////////////////////
/// @var        変数名
/// @brief      変数の説明
///
////////////////////////////////////////////////////////////////////////////////


/** 一度使用した__GLOBAL_DEFINE__や__GLOBAはL再使用しない **/
#ifdef      __GLOBAL_DEFINE__
#undef      __GLOBAL_DEFINE__
#endif /* __GLOBAL_DEFINE__ */
#undef      __GLOBAL

#endif    /*  __RB_H__ */
/*********************EOF******************************************************/