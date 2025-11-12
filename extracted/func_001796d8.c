void func_001796d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001796d8: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001796ec: lw $v0, 4($a0)
    func_00178fa0();  // 0x178f58                                // 0x001796f0: jal 0x178f58
    s0 = v0 + 0xb0;                                             // 0x001796f4: addiu $s0, $v0, 0xb0
    /* beqzl $v0, 0x179710 */                                   // 0x001796f8: beqzl $v0, 0x179710
    v1 = *(uint8_t*)(s0);                                       // 0x00179700: lbu $v1, 0($s0)
    v0 = 1;                                                     // 0x00179704: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v1;                                      // 0x00179708: sw $v1, 0($s1)
    return;                                                     // 0x00179718: jr $ra
    sp = sp + 0x20;                                             // 0x0017971c: addiu $sp, $sp, 0x20
}