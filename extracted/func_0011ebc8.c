void func_0011ebc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0011ebc8: addiu $sp, $sp, -0x50
    v0 = (unsigned)a0 >> 0xa;                                   // 0x0011ebcc: srl $v0, $a0, 0xa
    if (a0 < 0) goto label_0x11ec08;                            // 0x0011ebf0: bltz $a0, 0x11ec08
    s0 = v0 << 6;                                               // 0x0011ebf4: sll $s0, $v0, 6
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0011ebf8: lw $v1, 8($s0)
    v0 = a0 & 0x3ff;                                            // 0x0011ebfc: andi $v0, $a0, 0x3ff
    if (v0 == v1) goto label_0x11ec14;                          // 0x0011ec00: beql $v0, $v1, 0x11ec14
    v0 = 0x1f << 16;                                            // 0x0011ec04: lui $v0, 0x1f
label_0x11ec08:
    v0 = 0x8000 << 16;                                          // 0x0011ec08: lui $v0, 0x8000
    goto label_0x11eca0;                                        // 0x0011ec0c: b 0x11eca0
    v0 = v0 | 0x8002;                                           // 0x0011ec10: ori $v0, $v0, 0x8002
label_0x11ec14:
    v0 = v0 + 0x19e8;                                           // 0x0011ec14: addiu $v0, $v0, 0x19e8
    v1 = g_80001a04;  // Global at 0x80001a04                   // 0x0011ec18: lw $v1, 0x1c($v0)
    if (v1 != a0) goto label_0x11ec30;                          // 0x0011ec1c: bnel $v1, $a0, 0x11ec30
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x0011ec20: lw $v1, 0xc($s0)
    v0 = 0x8000 << 16;                                          // 0x0011ec24: lui $v0, 0x8000
    goto label_0x11eca0;                                        // 0x0011ec28: b 0x11eca0
    v0 = v0 | 0x10;                                             // 0x0011ec2c: ori $v0, $v0, 0x10
label_0x11ec30:
    v0 = v1 & 2;                                                // 0x0011ec30: andi $v0, $v1, 2
    if (v0 == 0) goto label_0x11ec48;                           // 0x0011ec34: beqz $v0, 0x11ec48
    /* nop */                                                   // 0x0011ec38: nop 
    func_0011e1c0();  // 0x11e188                                // 0x0011ec3c: jal 0x11e188
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x0011ec44: lw $v1, 0xc($s0)
label_0x11ec48:
    if (s1 != 0) goto label_0x11ec64;                           // 0x0011ec48: bnez $s1, 0x11ec64
    *(uint32_t*)((s0) + 0x28) = s1;                             // 0x0011ec4c: sw $s1, 0x28($s0)
    v0 = 0xffff << 16;                                          // 0x0011ec50: lui $v0, 0xffff
    v0 = v0 | 0xfffd;                                           // 0x0011ec54: ori $v0, $v0, 0xfffd
    v0 = v1 & v0;                                               // 0x0011ec58: and $v0, $v1, $v0
    goto label_0x11ec8c;                                        // 0x0011ec5c: b 0x11ec8c
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0011ec60: sw $v0, 0xc($s0)
label_0x11ec64:
    v0 = v1 | 2;                                                // 0x0011ec64: ori $v0, $v1, 2
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0011ec6c: sw $v0, 0xc($s0)
    *(uint32_t*)((s0) + 0x2c) = gp;                             // 0x0011ec70: sw $gp, 0x2c($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x0011ec74: lw $v0, 0xc($s0)
    v0 = v0 & 1;                                                // 0x0011ec78: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x11ec8c;                           // 0x0011ec7c: beqz $v0, 0x11ec8c
    *(uint32_t*)((s0) + 0x30) = s3;                             // 0x0011ec80: sw $s3, 0x30($s0)
    func_0011e188();  // 0x11e100                                // 0x0011ec84: jal 0x11e100
label_0x11ec8c:
    func_0011e4b0();  // 0x11e460                                // 0x0011ec8c: jal 0x11e460
    /* nop */                                                   // 0x0011ec90: nop 
    func_0011e100();  // 0x11df70                                // 0x0011ec94: jal 0x11df70
label_0x11eca0:
    return;                                                     // 0x0011ecb4: jr $ra
    sp = sp + 0x50;                                             // 0x0011ecb8: addiu $sp, $sp, 0x50
}