void func_001a2f50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a2f50: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a2f58: addu.qb $zero, $sp, $s1
    func_001a31d0();  // 1a31d0                                // 0x001a2f60: jal 0x1a31d0
    a1 = 9;                                                     // 0x001a2f6c: addiu $a1, $zero, 9
    func_001a31e0();  // 1a31e0                                // 0x001a2f70: jal 0x1a31e0
    if (v0 == 0) goto label_0x1a2f88;                           // 0x001a2f78: beqz $v0, 0x1a2f88
    goto label_0x1a2fd8;                                        // 0x001a2f80: b 0x1a2fd8
label_0x1a2f88:
    a1 = 9;                                                     // 0x001a2f88: addiu $a1, $zero, 9
    func_001a3230();  // 1a3230                                // 0x001a2f8c: jal 0x1a3230
    if (v0 != 0) goto label_0x1a2fa4;                           // 0x001a2f94: bnez $v0, 0x1a2fa4
    /* nop */                                                   // 0x001a2f98: nop 
    goto label_0x1a2fd8;                                        // 0x001a2f9c: b 0x1a2fd8
label_0x1a2fa4:
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a2fa4: lw $v1, 4($v0)
    at = ((unsigned)v1 < (unsigned)s1) ? 1 : 0;                 // 0x001a2fa8: sltu $at, $v1, $s1
    if (at == 0) goto label_0x1a2fbc;                           // 0x001a2fac: beqz $at, 0x1a2fbc
    goto label_0x1a2fd8;                                        // 0x001a2fb4: b 0x1a2fd8
label_0x1a2fbc:
    func_001a3230();  // 1a3230                                // 0x001a2fc0: jal 0x1a3230
    a1 = -1;                                                    // 0x001a2fc4: addiu $a1, $zero, -1
    if (v0 != 0) goto label_0x1a2fd8;                           // 0x001a2fc8: bnez $v0, 0x1a2fd8
    /* nop */                                                   // 0x001a2fcc: nop 
    goto label_0x1a2fd8;                                        // 0x001a2fd0: b 0x1a2fd8
label_0x1a2fd8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2fdc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2fe0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2fe4: jr $ra
    sp = sp + 0x30;                                             // 0x001a2fe8: addiu $sp, $sp, 0x30
}