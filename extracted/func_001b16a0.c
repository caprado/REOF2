void func_001b16a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b16a0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b16a8: addu.qb $zero, $sp, $s1
    s1 = 0x54 << 16;                                            // 0x001b16b0: lui $s1, 0x54
    s1 = s1 + -0x350;                                           // 0x001b16b4: addiu $s1, $s1, -0x350
label_0x1b16bc:
    a0 = g_0053fcb0;  // Global at 0x0053fcb0                   // 0x001b16bc: lw $a0, 0($s1)
    v1 = -1;                                                    // 0x001b16c0: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1b16dc;                          // 0x001b16c4: beq $a0, $v1, 0x1b16dc
    /* nop */                                                   // 0x001b16c8: nop 
    func_00192350();  // 0x192330                                // 0x001b16cc: jal 0x192330
    /* nop */                                                   // 0x001b16d0: nop 
    v1 = -1;                                                    // 0x001b16d4: addiu $v1, $zero, -1
    g_0053fcb0 = v1;  // Global at 0x0053fcb0                   // 0x001b16d8: sw $v1, 0($s1)
label_0x1b16dc:
    s0 = s0 + 1;                                                // 0x001b16dc: addiu $s0, $s0, 1
    v1 = (s0 < 0x40) ? 1 : 0;                                   // 0x001b16e0: slti $v1, $s0, 0x40
    if (v1 != 0) goto label_0x1b16bc;                           // 0x001b16e4: bnez $v1, 0x1b16bc
    s1 = s1 + 4;                                                // 0x001b16e8: addiu $s1, $s1, 4
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b16f0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b16f4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b16f8: jr $ra
    sp = sp + 0x30;                                             // 0x001b16fc: addiu $sp, $sp, 0x30
}