void func_0013b1e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013b1e8: addiu $sp, $sp, -0x20
    func_00137fb0();  // 0x137ec8                                // 0x0013b1fc: jal 0x137ec8
    a0 = 0x4700;                                                // 0x0013b200: addiu $a0, $zero, 0x4700
    func_00138160();  // 0x1380a8                                // 0x0013b20c: jal 0x1380a8
    a0 = 0x4701;                                                // 0x0013b214: addiu $a0, $zero, 0x4701
    func_00137fb0();  // 0x137ec8                                // 0x0013b218: jal 0x137ec8
    a0 = 0x4800;                                                // 0x0013b220: addiu $a0, $zero, 0x4800
    if (s0 < 0) goto label_0x13b25c;                            // 0x0013b224: bltz $s0, 0x13b25c
    func_00137fb0();  // 0x137ec8                                // 0x0013b22c: jal 0x137ec8
    /* nop */                                                   // 0x0013b230: nop 
    func_00138160();  // 0x1380a8                                // 0x0013b23c: jal 0x1380a8
    a2 = 2;                                                     // 0x0013b240: addiu $a2, $zero, 2
    a0 = 0x4801;                                                // 0x0013b244: addiu $a0, $zero, 0x4801
    func_00137fb0();  // 0x137ec8                                // 0x0013b248: jal 0x137ec8
    v1 = (s0 < 0) ? 1 : 0;                                      // 0x0013b250: slti $v1, $s0, 0
    if (v1 == 0) v0 = s0;                                       // 0x0013b258: movz $v0, $s0, $v1
label_0x13b25c:
    return;                                                     // 0x0013b268: jr $ra
    sp = sp + 0x20;                                             // 0x0013b26c: addiu $sp, $sp, 0x20
}