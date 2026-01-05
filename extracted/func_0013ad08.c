void func_0013ad08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013ad08: addiu $sp, $sp, -0x20
    func_00137ec8();  // 137ec8                                // 0x0013ad1c: jal 0x137ec8
    a0 = 0x4000;                                                // 0x0013ad20: addiu $a0, $zero, 0x4000
    s1 = s0 + 0x14;                                             // 0x0013ad24: addiu $s1, $s0, 0x14
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x0013ad28: lw $a0, 0x18($s0)
    a1 = 1;                                                     // 0x0013ad2c: addiu $a1, $zero, 1
    func_00138160();  // 138160                                // 0x0013ad30: jal 0x138160
    a0 = 0x4001;                                                // 0x0013ad38: addiu $a0, $zero, 0x4001
    func_00137ec8();  // 137ec8                                // 0x0013ad3c: jal 0x137ec8
    if (s0 < 0) goto label_0x13ad58;                            // 0x0013ad44: bltz $s0, 0x13ad58
    v0 = *(int32_t*)(s1);                                       // 0x0013ad4c: lw $v0, 0($s1)
    v0 = v0 ^ 1;                                                // 0x0013ad50: xori $v0, $v0, 1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0013ad54: sltu $v0, $zero, $v0
label_0x13ad58:
    return;                                                     // 0x0013ad64: jr $ra
    sp = sp + 0x20;                                             // 0x0013ad68: addiu $sp, $sp, 0x20
}