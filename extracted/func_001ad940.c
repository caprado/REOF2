void func_001ad940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ad940: addiu $sp, $sp, -0x30
    v1 = a0 << 1;                                               // 0x001ad944: sll $v1, $a0, 1
    v0 = 0x2b << 16;                                            // 0x001ad94c: lui $v0, 0x2b
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ad950: addu.qb $zero, $sp, $s1
    v1 = v1 + a0;                                               // 0x001ad954: addu $v1, $v1, $a0
    v0 = v0 + -0x57dc;                                          // 0x001ad95c: addiu $v0, $v0, -0x57dc
    s0 = v1 << 3;                                               // 0x001ad960: sll $s0, $v1, 3
    v0 = v0 + s0;                                               // 0x001ad964: addu $v0, $v0, $s0
    a1 = g_002aa824;  // Global at 0x002aa824                   // 0x001ad968: lw $a1, 0($v0)
    func_001adab0();  // 0x1ad9c0                                // 0x001ad96c: jal 0x1ad9c0
    v0 = 0x2b << 16;                                            // 0x001ad974: lui $v0, 0x2b
    v1 = s1 << 2;                                               // 0x001ad978: sll $v1, $s1, 2
    v0 = v0 + -0x57e0;                                          // 0x001ad97c: addiu $v0, $v0, -0x57e0
    a0 = v0 + s0;                                               // 0x001ad980: addu $a0, $v0, $s0
    v0 = 0x2b << 16;                                            // 0x001ad984: lui $v0, 0x2b
    *(uint8_t*)(a0) = 0;                                        // 0x001ad988: sb $zero, 0($a0)
    v0 = v0 + -0x5788;                                          // 0x001ad98c: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001ad990: addu $v0, $v0, $v1
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001ad994: lw $a0, 0($v0)
    func_00132c40();  // 0x132b10                                // 0x001ad998: jal 0x132b10
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ad9a8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ad9ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ad9b0: jr $ra
    sp = sp + 0x30;                                             // 0x001ad9b4: addiu $sp, $sp, 0x30
}