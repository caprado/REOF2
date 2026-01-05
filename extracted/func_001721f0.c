void func_001721f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001721f0: addiu $sp, $sp, -0x10
    func_00169af0();  // 169af0                                // 0x001721fc: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00172204: lui $a1, 0xff00
    if (v0 == 0) goto label_0x172228;                           // 0x0017220c: beqz $v0, 0x172228
    a1 = a1 | 0x138;                                            // 0x00172210: ori $a1, $a1, 0x138
    return func_00169940();  // Tail call                        // 0x00172220: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00172224: addiu $sp, $sp, 0x10
label_0x172228:
    v0 = 1;                                                     // 0x00172228: addiu $v0, $zero, 1
    func_001722a0();  // 1722a0                                // 0x0017222c: jal 0x1722a0
    *(uint32_t*)((s0) + 0x44) = v0;                             // 0x00172230: sw $v0, 0x44($s0)
    return;                                                     // 0x00172240: jr $ra
    sp = sp + 0x10;                                             // 0x00172244: addiu $sp, $sp, 0x10
}