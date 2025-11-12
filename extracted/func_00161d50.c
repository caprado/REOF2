void func_00161d50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00161d50: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161d58: lw $a0, 0xa8($a0)
    return func_0017d328();  // Tail call                       // 0x00161d60: j 0x17d328
    sp = sp + 0x10;                                             // 0x00161d64: addiu $sp, $sp, 0x10
label_0x161d68:
    sp = sp + -0x10;                                            // 0x00161d68: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161d70: lw $a0, 0xa8($a0)
    return func_0017d388();  // Tail call                        // 0x00161d78: j 0x17d368
    sp = sp + 0x10;                                             // 0x00161d7c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161d80: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161d88: lw $a0, 0xa8($a0)
    return func_0017d368();  // Tail call                        // 0x00161d90: j 0x17d348
    sp = sp + 0x10;                                             // 0x00161d94: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161d98: addiu $sp, $sp, -0x10
    goto label_0x161d68;                                        // 0x00161da4: j 0x161d68
    sp = sp + 0x10;                                             // 0x00161da8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161dac: nop 
    sp = sp + -0x10;                                            // 0x00161db0: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161db8: lw $a0, 0xa8($a0)
    return func_0017d3a8();  // Tail call                        // 0x00161dc0: j 0x17d388
    sp = sp + 0x10;                                             // 0x00161dc4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161dc8: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161dd0: lw $a0, 0xa8($a0)
    return func_0017d130();  // Tail call                       // 0x00161dd8: j 0x17d130
    sp = sp + 0x10;                                             // 0x00161ddc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161de0: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161de8: lw $a0, 0xa8($a0)
    return func_0017d138();  // Tail call                       // 0x00161df0: j 0x17d138
    sp = sp + 0x10;                                             // 0x00161df4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161df8: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161e00: lw $a0, 0xa8($a0)
    return func_0017d140();  // Tail call                       // 0x00161e08: j 0x17d140
    sp = sp + 0x10;                                             // 0x00161e0c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161e10: addiu $sp, $sp, -0x10
    a0 = str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00161e18: lw $a0, 0xa8($a0)
    return func_0017d148();  // Tail call                       // 0x00161e20: j 0x17d148
    sp = sp + 0x10;                                             // 0x00161e24: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161e28: addiu $sp, $sp, -0x10
    return func_0017ced8();  // Tail call                        // 0x00161e34: j 0x17cec8
    sp = sp + 0x10;                                             // 0x00161e38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161e3c: nop 
    sp = sp + -0x10;                                            // 0x00161e40: addiu $sp, $sp, -0x10
    return func_0017cf08();  // Tail call                        // 0x00161e4c: j 0x17ced8
    sp = sp + 0x10;                                             // 0x00161e50: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161e54: nop 
    sp = sp + -0x10;                                            // 0x00161e58: addiu $sp, $sp, -0x10
    t2 = *(int32_t*)((v0) + 0xc);                               // 0x00161e6c: lw $t2, 0xc($v0)
    t1 = *(int32_t*)((v0) + 8);                                 // 0x00161e70: lw $t1, 8($v0)
    v1 = (unsigned)t2 >> 0x1f;                                  // 0x00161e74: srl $v1, $t2, 0x1f
    t2 = t2 + v1;                                               // 0x00161e7c: addu $t2, $t2, $v1
    t2 = t2 >> 1;                                               // 0x00161e80: sra $t2, $t2, 1
    goto label_0x161ec8;                                        // 0x00161e84: j 0x161ec8
    sp = sp + 0x10;                                             // 0x00161e88: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161e8c: nop 
    sp = sp + -0x10;                                            // 0x00161e90: addiu $sp, $sp, -0x10
    t0 = *(int32_t*)((v0) + 0xc);                               // 0x00161ea0: lw $t0, 0xc($v0)
    t1 = *(int32_t*)((v0) + 8);                                 // 0x00161ea4: lw $t1, 8($v0)
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00161ea8: srl $v1, $t0, 0x1f
    t0 = t0 + v1;                                               // 0x00161eb0: addu $t0, $t0, $v1
    t0 = t0 >> 1;                                               // 0x00161eb4: sra $t0, $t0, 1
    goto label_0x161ec8;                                        // 0x00161ebc: j 0x161ec8
    sp = sp + 0x10;                                             // 0x00161ec0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161ec4: nop 
label_0x161ec8:
    sp = sp + -0xe0;                                            // 0x00161ec8: addiu $sp, $sp, -0xe0
    func_0015fcb0();  // 0x15fc80                                // 0x00161f08: jal 0x15fc80
    /* bnezl $v0, 0x161f30 */                                   // 0x00161f10: bnezl $v0, 0x161f30
    v0 = *(int32_t*)(s2);                                       // 0x00161f14: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00161f18: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00161f1c: jal 0x163410
    a0 = &str_00228848;  // "E306166: MWSFD_CnvFrmClipARGB8888: getfrm is failed." // 0x00161f20: addiu $a0, $a0, -0x77b8
    goto label_0x161f88;                                        // 0x00161f24: b 0x161f88
    /* nop */                                                   // 0x00161f2c: nop 
    if (v0 != 0) goto label_0x161f48;                           // 0x00161f30: bnez $v0, 0x161f48
    a0 = 0x23 << 16;                                            // 0x00161f34: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00161f38: jal 0x163410
    a0 = &str_00228880;  // "E306167: MWSFD_CnvFrmClipYUV422: handle is invalid." // 0x00161f3c: addiu $a0, $a0, -0x7780
    goto label_0x161f88;                                        // 0x00161f40: b 0x161f88
label_0x161f48:
    func_00160860();  // 0x160850                                // 0x00161f48: jal 0x160850
    func_001608f0();  // 0x160878                                // 0x00161f5c: jal 0x160878
    func_0017ad58();  // 0x17acd0                                // 0x00161f7c: jal 0x17acd0
label_0x161f88:
    return;                                                     // 0x00161fa8: jr $ra
    sp = sp + 0xe0;                                             // 0x00161fac: addiu $sp, $sp, 0xe0
}