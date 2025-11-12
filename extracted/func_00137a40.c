void func_00137a40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00137a40: addiu $sp, $sp, -0x30
    v0 = 0x20 << 16;                                            // 0x00137a44: lui $v0, 0x20
    s3 = 0x20 << 16;                                            // 0x00137a4c: lui $s3, 0x20
    a0 = s3 + 0x21c4;                                           // 0x00137a50: addiu $a0, $s3, 0x21c4
    func_00141ee0();  // 0x141e50                                // 0x00137a64: jal 0x141e50
    s1 = v0 + 0x2188;                                           // 0x00137a68: addiu $s1, $v0, 0x2188
    if (v0 == 0) goto label_0x137b10;                           // 0x00137a6c: beqz $v0, 0x137b10
    v0 = 1;                                                     // 0x00137a70: addiu $v0, $zero, 1
    s0 = g_00202189;  // Global at 0x00202189                   // 0x00137a74: lb $s0, 1($s1)
    if (s0 != v0) goto label_0x137abc;                          // 0x00137a78: bne $s0, $v0, 0x137abc
    v1 = g_00202189;  // Global at 0x00202189                   // 0x00137a7c: lbu $v1, 1($s1)
    v0 = 0x20 << 16;                                            // 0x00137a80: lui $v0, 0x20
    s2 = v0 + 0x21c8;                                           // 0x00137a84: addiu $s2, $v0, 0x21c8
    v1 = g_002021c8;  // Global at 0x002021c8                   // 0x00137a88: lw $v1, 0($s2)
    if (v1 != s0) goto label_0x137a9c;                          // 0x00137a8c: bne $v1, $s0, 0x137a9c
    /* nop */                                                   // 0x00137a90: nop 
    func_00141408();  // 0x1413f0                                // 0x00137a94: jal 0x1413f0
    /* nop */                                                   // 0x00137a98: nop 
label_0x137a9c:
    func_00137860();  // 0x137690                                // 0x00137a9c: jal 0x137690
    v0 = g_002021c8;  // Global at 0x002021c8                   // 0x00137aa4: lw $v0, 0($s2)
    if (v0 != s0) goto label_0x137abc;                          // 0x00137aa8: bnel $v0, $s0, 0x137abc
    v1 = g_00202189;  // Global at 0x00202189                   // 0x00137aac: lbu $v1, 1($s1)
    func_00141480();  // 0x141468                                // 0x00137ab0: jal 0x141468
    /* nop */                                                   // 0x00137ab4: nop 
    v1 = g_00202189;  // Global at 0x00202189                   // 0x00137ab8: lbu $v1, 1($s1)
label_0x137abc:
    v0 = v1 << 0x18;                                            // 0x00137abc: sll $v0, $v1, 0x18
    v1 = 2;                                                     // 0x00137ac0: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x00137ac4: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x137b10;                          // 0x00137ac8: bnel $v0, $v1, 0x137b10
    g_002021c4 = 0;  // Global at 0x002021c4                    // 0x00137acc: sw $zero, 0x21c4($s3)
    v1 = 0x20 << 16;                                            // 0x00137ad0: lui $v1, 0x20
    s2 = 1;                                                     // 0x00137ad4: addiu $s2, $zero, 1
    s0 = v1 + 0x21cc;                                           // 0x00137ad8: addiu $s0, $v1, 0x21cc
    v0 = g_002021cc;  // Global at 0x002021cc                   // 0x00137adc: lw $v0, 0($s0)
    if (v0 != s2) goto label_0x137af0;                          // 0x00137ae0: bne $v0, $s2, 0x137af0
    /* nop */                                                   // 0x00137ae4: nop 
    func_00141408();  // 0x1413f0                                // 0x00137ae8: jal 0x1413f0
    /* nop */                                                   // 0x00137aec: nop 
label_0x137af0:
    func_00137a40();  // 0x137860                                // 0x00137af0: jal 0x137860
    v0 = g_002021cc;  // Global at 0x002021cc                   // 0x00137af8: lw $v0, 0($s0)
    if (v0 != s2) goto label_0x137b10;                          // 0x00137afc: bnel $v0, $s2, 0x137b10
    g_002021c4 = 0;  // Global at 0x002021c4                    // 0x00137b00: sw $zero, 0x21c4($s3)
    func_00141480();  // 0x141468                                // 0x00137b04: jal 0x141468
    /* nop */                                                   // 0x00137b08: nop 
    g_002021c4 = 0;  // Global at 0x002021c4                    // 0x00137b0c: sw $zero, 0x21c4($s3)
label_0x137b10:
    return;                                                     // 0x00137b24: jr $ra
    sp = sp + 0x30;                                             // 0x00137b28: addiu $sp, $sp, 0x30
}