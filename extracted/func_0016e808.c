void func_0016e808() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0016e808: addiu $sp, $sp, -0x40
    v0 = *(int32_t*)((s2) + 0x1b30);                            // 0x0016e830: lw $v0, 0x1b30($s2)
    s1 = *(int32_t*)(v0);                                       // 0x0016e834: lw $s1, 0($v0)
    func_0016e8e0();  // 16e8e0                                // 0x0016e838: jal 0x16e8e0
    s5 = v0 + 0x8c;                                             // 0x0016e83c: addiu $s5, $v0, 0x8c
    a2 = 1;                                                     // 0x0016e844: addiu $a2, $zero, 1
    func_0013fca8();  // 13fca8                                // 0x0016e848: jal 0x13fca8
    func_00158df0();  // 158df0                                // 0x0016e858: jal 0x158df0
    a2 = 1;                                                     // 0x0016e868: addiu $a2, $zero, 1
    func_0013fca8();  // 13fca8                                // 0x0016e86c: jal 0x13fca8
    s1 = v0 - s4;                                               // 0x0016e874: subu $s1, $v0, $s4
    a3 = 0xff00 << 16;                                          // 0x0016e878: lui $a3, 0xff00
    func_0016d308();  // 16d308                                // 0x0016e888: jal 0x16d308
    a3 = a3 | 0xf07;                                            // 0x0016e88c: ori $a3, $a3, 0xf07
    func_0016d288();  // 16d288                                // 0x0016e898: jal 0x16d288
    if (s0 != 0) goto label_0x16e8bc;                           // 0x0016e8a8: bnez $s0, 0x16e8bc
    a1 = 1;                                                     // 0x0016e8ac: addiu $a1, $zero, 1
    func_001735e8();  // 1735e8                                // 0x0016e8b0: jal 0x1735e8
    a2 = *(int32_t*)((s5) + 0x18);                              // 0x0016e8b4: lw $a2, 0x18($s5)
label_0x16e8bc:
    return;                                                     // 0x0016e8d8: jr $ra
    sp = sp + 0x40;                                             // 0x0016e8dc: addiu $sp, $sp, 0x40
}