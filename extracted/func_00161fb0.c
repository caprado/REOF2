void func_00161fb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00161fb0: addiu $sp, $sp, -0x10
    t2 = *(int32_t*)((v0) + 0xc);                               // 0x00161fc4: lw $t2, 0xc($v0)
    t1 = *(int32_t*)((v0) + 8);                                 // 0x00161fc8: lw $t1, 8($v0)
    v1 = (unsigned)t2 >> 0x1f;                                  // 0x00161fcc: srl $v1, $t2, 0x1f
    t2 = t2 + v1;                                               // 0x00161fd4: addu $t2, $t2, $v1
    t2 = t2 >> 1;                                               // 0x00161fd8: sra $t2, $t2, 1
    goto label_0x162020;                                        // 0x00161fdc: j 0x162020
    sp = sp + 0x10;                                             // 0x00161fe0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00161fe4: nop 
    sp = sp + -0x10;                                            // 0x00161fe8: addiu $sp, $sp, -0x10
    t0 = *(int32_t*)((v0) + 0xc);                               // 0x00161ff8: lw $t0, 0xc($v0)
    t1 = *(int32_t*)((v0) + 8);                                 // 0x00161ffc: lw $t1, 8($v0)
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00162000: srl $v1, $t0, 0x1f
    t0 = t0 + v1;                                               // 0x00162008: addu $t0, $t0, $v1
    t0 = t0 >> 1;                                               // 0x0016200c: sra $t0, $t0, 1
    goto label_0x162020;                                        // 0x00162014: j 0x162020
    sp = sp + 0x10;                                             // 0x00162018: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016201c: nop 
label_0x162020:
    sp = sp + -0xe0;                                            // 0x00162020: addiu $sp, $sp, -0xe0
    func_0015fc80();  // 15fc80                                // 0x00162060: jal 0x15fc80
    /* bnezl $v0, 0x162088 */                                   // 0x00162068: bnezl $v0, 0x162088
    v0 = *(int32_t*)(s2);                                       // 0x0016206c: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00162070: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00162074: jal 0x163410
    a0 = &str_002288b8;  // "E306168: MWSFD_CnvFrmClipYUV422: getfrm is failed." // 0x00162078: addiu $a0, $a0, -0x7748
    goto label_0x1620e0;                                        // 0x0016207c: b 0x1620e0
    /* nop */                                                   // 0x00162084: nop 
    if (v0 != 0) goto label_0x1620a0;                           // 0x00162088: bnez $v0, 0x1620a0
    a0 = 0x23 << 16;                                            // 0x0016208c: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00162090: jal 0x163410
    a0 = &str_002288f0;  // "E304162: MWSFD_GetMaxAlpha: handle is invalid." // 0x00162094: addiu $a0, $a0, -0x7710
    goto label_0x1620e0;                                        // 0x00162098: b 0x1620e0
label_0x1620a0:
    func_00160850();  // 160850                                // 0x001620a0: jal 0x160850
    func_00160878();  // 160878                                // 0x001620b4: jal 0x160878
    func_0017b7a8();  // 17b7a8                                // 0x001620d4: jal 0x17b7a8
label_0x1620e0:
    return;                                                     // 0x00162100: jr $ra
    sp = sp + 0xe0;                                             // 0x00162104: addiu $sp, $sp, 0xe0
}