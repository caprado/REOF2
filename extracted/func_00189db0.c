void func_00189db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00189db0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00189dbc: addu.qb $zero, $sp, $s1
    a0 = *(int32_t*)((a0) + 0x14);                              // 0x00189dc4: lw $a0, 0x14($a0)
    func_0018db10();  // 0x18db00                                // 0x00189dc8: jal 0x18db00
    a2 = 0x24;                                                  // 0x00189ddc: addiu $a2, $zero, 0x24
    func_0018da60();  // 0x18da10                                // 0x00189de4: jal 0x18da10
    s0 = s0 + 0x30;                                             // 0x00189de8: addiu $s0, $s0, 0x30
    *(uint32_t*)((s2) + 8) = s0;                                // 0x00189dec: sw $s0, 8($s2)
    v1 = -0x10;                                                 // 0x00189df0: addiu $v1, $zero, -0x10
    a0 = *(int32_t*)((s1) + 0x1c);                              // 0x00189df4: lw $a0, 0x1c($s1)
    a0 = a0 + 0xf;                                              // 0x00189df8: addiu $a0, $a0, 0xf
    v1 = a0 & v1;                                               // 0x00189dfc: and $v1, $a0, $v1
    s0 = s0 + v1;                                               // 0x00189e00: addu $s0, $s0, $v1
    *(uint32_t*)((s2) + 0x10) = s0;                             // 0x00189e04: sw $s0, 0x10($s2)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00189e0c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00189e10: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00189e14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00189e18: jr $ra
    sp = sp + 0x40;                                             // 0x00189e1c: addiu $sp, $sp, 0x40
}