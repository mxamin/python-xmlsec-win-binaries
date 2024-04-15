/*
 * XML Security Library (http://www.aleksey.com/xmlsec).
 *
 * This is free software; see Copyright file in the source
 * distribution for preciese wording.
 *
 * Copyright (c) 2005-2006 Cryptocom LTD (http://www.cryptocom.ru).
 * All rights reserved.
 */
#ifndef CRYPTOCOM_OIDS_csp_H
#define CRYPTOCOM_OIDS_csp_H
/* Autogenerated from master.oid by oid2h.tcl */

/*! \defgroup szOID_MAGPRO szOID_MAGPRO
 *  \brief The OIDs supported by MagPro CSP
 *
 * @{
 */

/*! GOST 34.10-94 Diffie-Hellman algorithm Cryptocom LTD */
#define szOID_MAGPRO_DH_R3410_94 "1.2.643.2.9.1.3.1"

/*! GOST 34.10-2001 Diffie-Hellman algorithm Cryptocom LTD */
#define szOID_MAGPRO_DH_R3410_2001 "1.2.643.2.9.1.3.2"

/*  */
#define szOID_MAGPRO_DH_R3410_94_EPHEM "1.2.643.2.9.1.3.1"

/*  */
#define szOID_MAGPRO_DH_R3410_2001_EPHEM "1.2.643.2.9.1.3.2"

/*! GOST 34.10/11-94 digital signature algorithm Cryptocom LTD with digest */
#define szOID_MAGPRO_SIGN_R3410_94 "1.2.643.2.9.1.3.3"

/*! GOST 34.10-2001 digital signature algorithm with digest */
#define szOID_MAGPRO_SIGN_R3410_2001 "1.2.643.2.9.1.3.4"

/*! GOST 28147-89 MAC algorithm Cryptocom LTD */
#define szOID_MAGPRO_HASH_28147_89 "1.2.643.2.9.1.4.1"

#define szOID_MAGPRO_PUBKEY_DH_R3410_94 "1.2.643.2.9.1.5.1"

#define szOID_MAGPRO_PUBKEY_DH_R3410_2001 "1.2.643.2.9.1.5.2"

/*! GOST 34.10/11-94 digital signature algorithm Cryptocom LTD */
#define szOID_MAGPRO_PUBKEY_SIGN_R3410_94 "1.2.643.2.9.1.5.3"

/*! GOST 34.10-2001 digital signature algorithm */
#define szOID_MAGPRO_PUBKEY_SIGN_R3410_2001 "1.2.643.2.9.1.5.4"

/*! GOST 28147-89 encryption parameters */
#define szOID_MAGPRO_PARAM_ENCR_28147_89 "1.2.643.2.9.1.6.1"

/*! GOST 34.10-2001 public key parameters */
#define szOID_MAGPRO_PARAM_PK_CC_01 "1.2.643.2.9.1.8.1"

/*! GOST 28147-89 symmetric cipher Cryptocom LTD */
#define szOID_MAGPRO_ENCR_28147_89 "1.2.643.2.2.21"

/*! GOST 34.10-2001 digital signature algorithm CryptoPro LTD */
#define szOID_MAGPRO_SIGN_R3410_2001_CP "1.2.643.2.2.3"

/*! GOST 34.10/11-94 digital signature algorithm CryptoPro LTD */
#define szOID_MAGPRO_SIGN_R3410_94_CP "1.2.643.2.2.4"

/*! GOST 34.11-94 digest algorithm Cryptocom LTD */
#define szOID_MAGPRO_HASH_R3411_94 "1.2.643.2.2.9"

/*! GOST 34.10-2001 digital signature algorithm CryptoPro LTD public key */
#define szOID_MAGPRO_PUBKEY_SIGN_R3410_2001_CP "1.2.643.2.2.19"

/*! GOST 34.10/11-94 digital signature algorithm CryptoPro LTD public key */
#define szOID_MAGPRO_PUBKEY_SIGN_R3410_94_CP "1.2.643.2.2.20"

/*! GostR3411-94-CryptoProParamSet */
#define szOID_MAGPRO_PARAM_HASH_3411_94 "1.2.643.2.2.30.1"

/*! GostR3410-94-CryptoPro-A-ParamSet */
#define szOID_MAGPRO_PARAM_PK_CC_94 "1.2.643.2.2.32.2"


#define szOID_CP_PARAM_R3411_94_DEF "1.2.643.2.2.30.1"
#define szOID_CP_PARAM_R3411_94_1       "1.2.643.2.2.30.2"
#define szOID_CP_PARAM_R3411_94_2       "1.2.643.2.2.30.3"
#define szOID_CP_PARAM_R3411_94_3       "1.2.643.2.2.30.4"

#define szOID_CP_PARAM_28147_89_DEF "1.2.643.2.2.31.1"
#define szOID_CP_PARAM_28147_89_1       "1.2.643.2.2.31.2"
#define szOID_CP_PARAM_28147_89_2       "1.2.643.2.2.31.3"
#define szOID_CP_PARAM_28147_89_3       "1.2.643.2.2.31.4"
#define szOID_CP_PARAM_28147_89_4       "1.2.643.2.2.31.5"
#define szOID_CP_PARAM_28147_89_5       "1.2.643.2.2.31.6"
#define szOID_CP_PARAM_28147_89_6       "1.2.643.2.2.31.7"

/* OID for Signature 1024*/
#define szOID_CP_PARAM_PK_R3410_94_DEF  "1.2.643.2.2.32.2"      /*VerbaO*/
#define szOID_CP_PARAM_PK_R3410_94_S1   "1.2.643.2.2.32.3"
#define szOID_CP_PARAM_PK_R3410_94_S2   "1.2.643.2.2.32.4"
#define szOID_CP_PARAM_PK_R3410_94_S3   "1.2.643.2.2.32.5"
/* OID for DH 1024*/
#define szOID_CP_PARAM_PK_R3410_94_E1   "1.2.643.2.2.33.1"
#define szOID_CP_PARAM_PK_R3410_94_E2   "1.2.643.2.2.33.2"
#define szOID_CP_PARAM_PK_R3410_94_E3   "1.2.643.2.2.33.3"

#define szOID_CP_PARAM_PK_R3410_2001_DEF "1.2.643.2.2.35.1"
#define szOID_CP_PARAM_PK_R3410_2001_S0  "1.2.643.2.2.35.2"
#define szOID_CP_PARAM_PK_R3410_2001_S1  "1.2.643.2.2.35.3"
#define szOID_CP_PARAM_PK_R3410_2001_E0  "1.2.643.2.2.36.0"
#define szOID_CP_PARAM_PK_R3410_2001_E1  "1.2.643.2.2.36.1"

/* CRYPT_PUBKEY_ALG_OID_GROUP_ID */
#define szOID_CP_GOST_R3410_12_256 "1.2.643.7.1.1.1.1"
#define szOID_CP_GOST_R3410_12_512 "1.2.643.7.1.1.1.2"
#define szOID_CP_DH_12_256 "1.2.643.7.1.1.6.1"
#define szOID_CP_DH_12_512 "1.2.643.7.1.1.6.2"

/* CRYPT_SIGN_ALG_OID_GROUP_ID */
#define szOID_CP_GOST_R3411_12_256_R3410 "1.2.643.7.1.1.3.2"
#define szOID_CP_GOST_R3411_12_512_R3410 "1.2.643.7.1.1.3.3"


/*! @} */

#endif
