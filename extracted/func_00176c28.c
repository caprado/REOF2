void func_00176c28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00176c28: addiu $sp, $sp, -0x20
    a3 = a0 + 0x9a0;                                            // 0x00176c2c: addiu $a3, $a0, 0x9a0
    v1 = *(int32_t*)((a3) + 0x38);                              // 0x00176c34: lw $v1, 0x38($a3)
    if (v1 != 0) goto label_0x176c50;                           // 0x00176c38: bnez $v1, 0x176c50
    v0 = 1;                                                     // 0x00176c3c: addiu $v0, $zero, 1
    t0 = *(int32_t*)((a3) + 0xb0);                              // 0x00176c40: lw $t0, 0xb0($a3)
    func_00176db0();  // 176db0                                // 0x00176c44: jal 0x176db0
    v0 = local_0;                                               // 0x00176c4c: lw $v0, 0($sp)
label_0x176c50:
    return;                                                     // 0x00176c54: jr $ra
    sp = sp + 0x20;                                             // 0x00176c58: addiu $sp, $sp, 0x20
}