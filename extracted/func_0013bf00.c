void func_0013bf00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x0013bf00: addiu $sp, $sp, -0x130
    a2 = 0x100;                                                 // 0x0013bf04: addiu $a2, $zero, 0x100
    func_00107c70();  // 107c70                                // 0x0013bf28: jal 0x107c70
    func_0013bb40();  // 13bb40                                // 0x0013bf34: jal 0x13bb40
    func_00137ec8();  // 137ec8                                // 0x0013bf3c: jal 0x137ec8
    a0 = 0x6000;                                                // 0x0013bf40: addiu $a0, $zero, 0x6000
    a1 = 1;                                                     // 0x0013bf44: addiu $a1, $zero, 1
    func_001381d8();  // 1381d8                                // 0x0013bf48: jal 0x1381d8
    a0 = 0x6001;                                                // 0x0013bf50: addiu $a0, $zero, 0x6001
    func_00137ec8();  // 137ec8                                // 0x0013bf54: jal 0x137ec8
    a0 = 0x6100;                                                // 0x0013bf5c: addiu $a0, $zero, 0x6100
    if (s2 < 0) goto label_0x13c044;                            // 0x0013bf60: bltz $s2, 0x13c044
    func_00137ec8();  // 137ec8                                // 0x0013bf68: jal 0x137ec8
    /* nop */                                                   // 0x0013bf6c: nop 
    func_001380a8();  // 1380a8                                // 0x0013bf78: jal 0x1380a8
    a2 = 2;                                                     // 0x0013bf7c: addiu $a2, $zero, 2
    a0 = 0x6101;                                                // 0x0013bf80: addiu $a0, $zero, 0x6101
    func_00137ec8();  // 137ec8                                // 0x0013bf84: jal 0x137ec8
    a0 = 0x6200;                                                // 0x0013bf8c: addiu $a0, $zero, 0x6200
    if (s1 < 0) goto label_0x13c044;                            // 0x0013bf90: bltz $s1, 0x13c044
    func_00137ec8();  // 137ec8                                // 0x0013bf98: jal 0x137ec8
    /* nop */                                                   // 0x0013bf9c: nop 
    func_001380a8();  // 1380a8                                // 0x0013bfa8: jal 0x1380a8
    func_00137ec8();  // 137ec8                                // 0x0013bfb8: jal 0x137ec8
    a0 = 0x6201;                                                // 0x0013bfbc: addiu $a0, $zero, 0x6201
    v0 = 0x1000;                                                // 0x0013bfc0: addiu $v0, $zero, 0x1000
    v1 = (s1 < 0x1001) ? 1 : 0;                                 // 0x0013bfc4: slti $v1, $s1, 0x1001
    if (v1 == 0) s1 = v0;                                       // 0x0013bfc8: movz $s1, $v0, $v1
    if (s0 < 0) goto label_0x13c044;                            // 0x0013bfd0: bltz $s0, 0x13c044
    a0 = 0x6300;                                                // 0x0013bfd4: addiu $a0, $zero, 0x6300
    func_00137ec8();  // 137ec8                                // 0x0013bfd8: jal 0x137ec8
    /* nop */                                                   // 0x0013bfdc: nop 
    func_00138298();  // 138298                                // 0x0013bfec: jal 0x138298
    a0 = 0x6301;                                                // 0x0013bff4: addiu $a0, $zero, 0x6301
    func_00137ec8();  // 137ec8                                // 0x0013bff8: jal 0x137ec8
    if (s0 >= 0) goto label_0x13c028;                           // 0x0013c000: bgez $s0, 0x13c028
    a0 = 0x6500;                                                // 0x0013c004: addiu $a0, $zero, 0x6500
    func_00137ec8();  // 137ec8                                // 0x0013c008: jal 0x137ec8
    /* nop */                                                   // 0x0013c00c: nop 
    func_00138240();  // 138240                                // 0x0013c010: jal 0x138240
    func_00137ec8();  // 137ec8                                // 0x0013c018: jal 0x137ec8
    a0 = 0x6501;                                                // 0x0013c01c: addiu $a0, $zero, 0x6501
    goto label_0x13c044;                                        // 0x0013c020: b 0x13c044
label_0x13c028:
    func_00137ec8();  // 137ec8                                // 0x0013c028: jal 0x137ec8
    a0 = 0x6400;                                                // 0x0013c02c: addiu $a0, $zero, 0x6400
    func_00138240();  // 138240                                // 0x0013c030: jal 0x138240
    func_00137ec8();  // 137ec8                                // 0x0013c038: jal 0x137ec8
    a0 = 0x6401;                                                // 0x0013c03c: addiu $a0, $zero, 0x6401
    v0 = 1;                                                     // 0x0013c040: addiu $v0, $zero, 1
label_0x13c044:
    return;                                                     // 0x0013c058: jr $ra
    sp = sp + 0x130;                                            // 0x0013c05c: addiu $sp, $sp, 0x130
}