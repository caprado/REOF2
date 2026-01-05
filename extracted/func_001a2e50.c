void func_001a2e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a2e50: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a2e58: addu.qb $zero, $sp, $s1
    func_001a31d0();  // 1a31d0                                // 0x001a2e60: jal 0x1a31d0
    a1 = 2;                                                     // 0x001a2e6c: addiu $a1, $zero, 2
    func_001a31e0();  // 1a31e0                                // 0x001a2e70: jal 0x1a31e0
    if (v0 == 0) goto label_0x1a2e88;                           // 0x001a2e78: beqz $v0, 0x1a2e88
    goto label_0x1a2ed8;                                        // 0x001a2e80: b 0x1a2ed8
label_0x1a2e88:
    a1 = 2;                                                     // 0x001a2e88: addiu $a1, $zero, 2
    func_001a3230();  // 1a3230                                // 0x001a2e8c: jal 0x1a3230
    if (v0 != 0) goto label_0x1a2ea4;                           // 0x001a2e94: bnez $v0, 0x1a2ea4
    /* nop */                                                   // 0x001a2e98: nop 
    goto label_0x1a2ed8;                                        // 0x001a2e9c: b 0x1a2ed8
label_0x1a2ea4:
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a2ea4: lw $v1, 4($v0)
    at = ((unsigned)v1 < (unsigned)s1) ? 1 : 0;                 // 0x001a2ea8: sltu $at, $v1, $s1
    if (at == 0) goto label_0x1a2ebc;                           // 0x001a2eac: beqz $at, 0x1a2ebc
    goto label_0x1a2ed8;                                        // 0x001a2eb4: b 0x1a2ed8
label_0x1a2ebc:
    func_001a3230();  // 1a3230                                // 0x001a2ec0: jal 0x1a3230
    a1 = -1;                                                    // 0x001a2ec4: addiu $a1, $zero, -1
    if (v0 != 0) goto label_0x1a2ed8;                           // 0x001a2ec8: bnez $v0, 0x1a2ed8
    /* nop */                                                   // 0x001a2ecc: nop 
    goto label_0x1a2ed8;                                        // 0x001a2ed0: b 0x1a2ed8
label_0x1a2ed8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2edc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2ee0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2ee4: jr $ra
    sp = sp + 0x30;                                             // 0x001a2ee8: addiu $sp, $sp, 0x30
}