void func_00139f08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00139f08: addiu $sp, $sp, -0x20
    a1 = 0x20 << 16;                                            // 0x00139f14: lui $a1, 0x20
    a1 = a1 + 0x3ef0;                                           // 0x00139f1c: addiu $a1, $a1, 0x3ef0
    func_0010ae00();  // 0x10ac68                                // 0x00139f28: jal 0x10ac68
    v1 = g_002254f8;  // Global at 0x002254f8                   // 0x00139f30: lb $v1, 0($s0)
    v0 = 0x2f;                                                  // 0x00139f34: addiu $v0, $zero, 0x2f
    if (v1 == v0) goto label_0x139f54;                          // 0x00139f38: beq $v1, $v0, 0x139f54
    a0 = 0x5c;                                                  // 0x00139f3c: addiu $a0, $zero, 0x5c
    if (v1 == a0) goto label_0x139f54;                          // 0x00139f40: beq $v1, $a0, 0x139f54
    a1 = 0x22 << 16;                                            // 0x00139f44: lui $a1, 0x22
    func_0010a990();  // 0x10a860                                // 0x00139f4c: jal 0x10a860
    a1 = a1 + 0x54f0;                                           // 0x00139f50: addiu $a1, $a1, 0x54f0
label_0x139f54:
    s0 = 0x22 << 16;                                            // 0x00139f58: lui $s0, 0x22
    func_0010a990();  // 0x10a860                                // 0x00139f60: jal 0x10a860
    s0 = s0 + 0x54f8;                                           // 0x00139f64: addiu $s0, $s0, 0x54f8
    func_0010af38();  // 0x10ae00                                // 0x00139f68: jal 0x10ae00
    v0 = s1 + v0;                                               // 0x00139f74: addu $v0, $s1, $v0
    func_0010ac68();  // 0x10ab20                                // 0x00139f78: jal 0x10ab20
    a0 = v0 + -2;                                               // 0x00139f7c: addiu $a0, $v0, -2
    if (v0 == 0) goto label_0x139f98;                           // 0x00139f84: beqz $v0, 0x139f98
    func_0010a990();  // 0x10a860                                // 0x00139f8c: jal 0x10a860
    /* nop */                                                   // 0x00139f90: nop 
label_0x139f98:
    return func_00139560();  // Tail call                        // 0x00139fa4: j 0x1394e8
    sp = sp + 0x20;                                             // 0x00139fa8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00139fac: nop 
    a0 = a0 << 0x18;                                            // 0x00139fb0: sll $a0, $a0, 0x18
    a0 = a0 >> 0x18;                                            // 0x00139fb4: sra $a0, $a0, 0x18
    v0 = a0 + -0x61;                                            // 0x00139fb8: addiu $v0, $a0, -0x61
    v1 = a0 + -0x20;                                            // 0x00139fbc: addiu $v1, $a0, -0x20
    v0 = ((unsigned)v0 < (unsigned)0x1a) ? 1 : 0;               // 0x00139fc0: sltiu $v0, $v0, 0x1a
    a1 = v1 << 0x18;                                            // 0x00139fc4: sll $a1, $v1, 0x18
    if (v0 == 0) goto label_0x139fd4;                           // 0x00139fc8: beqz $v0, 0x139fd4
    a0 = a1 >> 0x18;                                            // 0x00139fd0: sra $a0, $a1, 0x18
label_0x139fd4:
    v1 = v1 ^ 0x5c;                                             // 0x00139fd4: xori $v1, $v1, 0x5c
    v0 = 0x2f;                                                  // 0x00139fd8: addiu $v0, $zero, 0x2f
    return;                                                     // 0x00139fdc: jr $ra
    if (v1 != 0) v0 = a0;                                       // 0x00139fe0: movn $v0, $a0, $v1
}