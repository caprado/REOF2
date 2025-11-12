void func_00179518() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179518: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0017952c: lw $v0, 4($a0)
    func_00178fa0();  // 0x178f58                                // 0x00179530: jal 0x178f58
    s0 = v0 + 0x80;                                             // 0x00179534: addiu $s0, $v0, 0x80
    /* beqzl $v0, 0x179550 */                                   // 0x00179538: beqzl $v0, 0x179550
    v1 = *(uint8_t*)((s0) + 4);                                 // 0x00179540: lbu $v1, 4($s0)
    v0 = 1;                                                     // 0x00179544: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v1;                                      // 0x00179548: sw $v1, 0($s1)
    return;                                                     // 0x00179558: jr $ra
    sp = sp + 0x20;                                             // 0x0017955c: addiu $sp, $sp, 0x20
}