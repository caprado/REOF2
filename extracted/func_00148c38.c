void func_00148c38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x00148c38: addiu $sp, $sp, -0x70
    s0 = 1;                                                     // 0x00148c4c: addiu $s0, $zero, 1
    func_00143c48();  // 143c48                                // 0x00148c64: jal 0x143c48
    *(uint32_t*)((s1) + 0x860) = s0;                            // 0x00148c68: sw $s0, 0x860($s1)
    func_001456a8();  // 1456a8                                // 0x00148c70: jal 0x1456a8
    a1 = 0x1c;                                                  // 0x00148c74: addiu $a1, $zero, 0x1c
    v1 = (unsigned)s2 >> 1;                                     // 0x00148c7c: srl $v1, $s2, 1
    v0 = (unsigned)s2 >> 0x11;                                  // 0x00148c80: srl $v0, $s2, 0x11
    s5 = v1 & 0xfff;                                            // 0x00148c84: andi $s5, $v1, 0xfff
    v0 = v0 & 3;                                                // 0x00148c88: andi $v0, $v0, 3
    a0 = (unsigned)s2 >> 0xd;                                   // 0x00148c8c: srl $a0, $s2, 0xd
    v1 = (unsigned)s2 >> 0xf;                                   // 0x00148c90: srl $v1, $s2, 0xf
    s4 = a0 & 3;                                                // 0x00148c94: andi $s4, $a0, 3
    s3 = v1 & 3;                                                // 0x00148c98: andi $s3, $v1, 3
    if (v0 == s0) goto label_0x148cb4;                          // 0x00148c9c: beq $v0, $s0, 0x148cb4
    *(uint32_t*)((s1) + 0x158) = v0;                            // 0x00148ca0: sw $v0, 0x158($s1)
    a1 = 0x22 << 16;                                            // 0x00148ca4: lui $a1, 0x22
    func_00148530();  // 148530                                // 0x00148cac: jal 0x148530
    a1 = &str_002269e0;  // "Unsupported profile/level"         // 0x00148cb0: addiu $a1, $a1, 0x69e0
label_0x148cb4:
    v0 = (unsigned)s2 >> 0x13;                                  // 0x00148cb4: srl $v0, $s2, 0x13
    v0 = v0 & 1;                                                // 0x00148cbc: andi $v0, $v0, 1
    a1 = 0x10;                                                  // 0x00148cc0: addiu $a1, $zero, 0x10
    *(uint32_t*)((s1) + 0x154) = v0;                            // 0x00148cc4: sw $v0, 0x154($s1)
    func_001456a8();  // 1456a8                                // 0x00148cc8: jal 0x1456a8
    s0 = (unsigned)s2 >> 0x14;                                  // 0x00148ccc: srl $s0, $s2, 0x14
    s2 = (unsigned)v0 >> 8;                                     // 0x00148cd0: srl $s2, $v0, 8
    v0 = 0x48;                                                  // 0x00148cd4: addiu $v0, $zero, 0x48
    if (s0 == v0) goto label_0x148cfc;                          // 0x00148cd8: beq $s0, $v0, 0x148cfc
    v0 = 0x58;                                                  // 0x00148cdc: addiu $v0, $zero, 0x58
    if (s0 == v0) goto label_0x148cfc;                          // 0x00148ce0: beq $s0, $v0, 0x148cfc
    v0 = 0x44;                                                  // 0x00148ce4: addiu $v0, $zero, 0x44
    if (s0 == v0) goto label_0x148cfc;                          // 0x00148ce8: beq $s0, $v0, 0x148cfc
    a1 = 0x22 << 16;                                            // 0x00148cec: lui $a1, 0x22
    func_00148530();  // 148530                                // 0x00148cf4: jal 0x148530
    a1 = &str_00226a08;  // "_sequenceScalableExtension() is not implemented" // 0x00148cf8: addiu $a1, $a1, 0x6a08
label_0x148cfc:
    a0 = *(int32_t*)((s1) + 0x13c);                             // 0x00148cfc: lw $a0, 0x13c($s1)
    t0 = s5 << 0x12;                                            // 0x00148d00: sll $t0, $s5, 0x12
    v1 = *(int32_t*)((s1) + 0x140);                             // 0x00148d04: lw $v1, 0x140($s1)
    t1 = s2 << 0xa;                                             // 0x00148d08: sll $t1, $s2, 0xa
    a2 = *(int32_t*)((s1) + 0x14c);                             // 0x00148d0c: lw $a2, 0x14c($s1)
    a3 = s3 << 0xc;                                             // 0x00148d10: sll $a3, $s3, 0xc
    v0 = *(int32_t*)((s1) + 0x150);                             // 0x00148d14: lw $v0, 0x150($s1)
    a1 = s4 << 0xc;                                             // 0x00148d18: sll $a1, $s4, 0xc
    a0 = a0 & 0xfff;                                            // 0x00148d1c: andi $a0, $a0, 0xfff
    v1 = v1 & 0xfff;                                            // 0x00148d20: andi $v1, $v1, 0xfff
    a3 = a3 | a0;                                               // 0x00148d24: or $a3, $a3, $a0
    a1 = a1 | v1;                                               // 0x00148d28: or $a1, $a1, $v1
    a2 = a2 + t0;                                               // 0x00148d2c: addu $a2, $a2, $t0
    v0 = v0 + t1;                                               // 0x00148d30: addu $v0, $v0, $t1
    *(uint32_t*)((s1) + 0x150) = v0;                            // 0x00148d34: sw $v0, 0x150($s1)
    *(uint32_t*)((s1) + 0x13c) = a3;                            // 0x00148d38: sw $a3, 0x13c($s1)
    *(uint32_t*)((s1) + 0x140) = a1;                            // 0x00148d3c: sw $a1, 0x140($s1)
    *(uint32_t*)((s1) + 0x14c) = a2;                            // 0x00148d40: sw $a2, 0x14c($s1)
    return;                                                     // 0x00148d60: jr $ra
    sp = sp + 0x70;                                             // 0x00148d64: addiu $sp, $sp, 0x70
}