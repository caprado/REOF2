void func_001c6030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c6030: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c603c: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((gp) + -0x62dc);                           // 0x001c6044: lw $s0, -0x62dc($gp)
    func_001b4fd0();  // 1b4fd0                                // 0x001c6048: jal 0x1b4fd0
    a0 = 0x14;                                                  // 0x001c604c: addiu $a0, $zero, 0x14
    v0 = 0x8080 << 16;                                          // 0x001c6050: lui $v0, 0x8080
    func_001b5050();  // 1b5050                                // 0x001c6054: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c6058: ori $a0, $v0, 0x8080
    v0 = *(int32_t*)((s0) + 0xd8);                              // 0x001c605c: lw $v0, 0xd8($s0)
    a0 = 0x48;                                                  // 0x001c6060: addiu $a0, $zero, 0x48
    s2 = *(int32_t*)((s0) + 0xd4);                              // 0x001c6064: lw $s2, 0xd4($s0)
    func_001c1980();  // 1c1980                                // 0x001c6068: jal 0x1c1980
    s1 = v0 + 0x50;                                             // 0x001c606c: addiu $s1, $v0, 0x50
    goto label_0x1c6090;                                        // 0x001c6070: b 0x1c6090
label_0x1c6078:
    func_001b4ff0();  // 1b4ff0                                // 0x001c6078: jal 0x1b4ff0
    func_001b5090();  // 1b5090                                // 0x001c6080: jal 0x1b5090
    a0 = *(int32_t*)(s0);                                       // 0x001c6084: lw $a0, 0($s0)
    s1 = s1 + 0x14;                                             // 0x001c6088: addiu $s1, $s1, 0x14
    s0 = s0 + 4;                                                // 0x001c608c: addiu $s0, $s0, 4
label_0x1c6090:
    v1 = *(int32_t*)(s0);                                       // 0x001c6090: lw $v1, 0($s0)
    if (v1 != 0) goto label_0x1c6078;                           // 0x001c6094: bnez $v1, 0x1c6078
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c60a0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c60a4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c60a8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c60ac: jr $ra
    sp = sp + 0x40;                                             // 0x001c60b0: addiu $sp, $sp, 0x40
}