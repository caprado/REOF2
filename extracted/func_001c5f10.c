void func_001c5f10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c5f10: addiu $sp, $sp, -0x20
    v0 = *(int8_t*)((a0) + 2);                                  // 0x001c5f1c: lb $v0, 2($a0)
    a0 = 1;                                                     // 0x001c5f24: addiu $a0, $zero, 1
    if (v0 == a0) goto label_0x1c5f60;                          // 0x001c5f28: beq $v0, $a0, 0x1c5f60
    /* nop */                                                   // 0x001c5f2c: nop 
    if (v0 == 0) goto label_0x1c5f40;                           // 0x001c5f30: beqz $v0, 0x1c5f40
    v1 = 0x38;                                                  // 0x001c5f34: addiu $v1, $zero, 0x38
    goto label_0x1c6014;                                        // 0x001c5f38: b 0x1c6014
    v0 = 1;                                                     // 0x001c5f3c: addiu $v0, $zero, 1
label_0x1c5f40:
    v0 = 5;                                                     // 0x001c5f40: addiu $v0, $zero, 5
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001c5f44: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = a0;                             // 0x001c5f48: sw $a0, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001c5f4c: sw $a0, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5f50: sw $v0, 0x10($s0)
    v0 = *(int8_t*)((s0) + 2);                                  // 0x001c5f54: lb $v0, 2($s0)
    v0 = v0 + 1;                                                // 0x001c5f58: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001c5f5c: sb $v0, 2($s0)
label_0x1c5f60:
    v1 = *(uint16_t*)((s0) + 0xa);                              // 0x001c5f60: lhu $v1, 0xa($s0)
    v0 = v1 & 0x20;                                             // 0x001c5f64: andi $v0, $v1, 0x20
    if (v0 == 0) goto label_0x1c5fa8;                           // 0x001c5f68: beqz $v0, 0x1c5fa8
    /* nop */                                                   // 0x001c5f6c: nop 
    func_001c7470();  // 0x1c7460                                // 0x001c5f70: jal 0x1c7460
    /* nop */                                                   // 0x001c5f74: nop 
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001c5f78: sw $zero, 0x30($s0)
    v0 = 1;                                                     // 0x001c5f7c: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5f80: lw $v1, 0x38($s0)
    if (v1 != v0) goto label_0x1c5fa0;                          // 0x001c5f84: bne $v1, $v0, 0x1c5fa0
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x001c5f8c: lw $a0, 0x20($s0)
    func_001c2e20();  // 0x1c2a50                                // 0x001c5f90: jal 0x1c2a50
    a1 = 2;                                                     // 0x001c5f94: addiu $a1, $zero, 2
    goto label_0x1c6014;                                        // 0x001c5f98: b 0x1c6014
    v0 = 1;                                                     // 0x001c5f9c: addiu $v0, $zero, 1
label_0x1c5fa0:
    goto label_0x1c6018;                                        // 0x001c5fa0: b 0x1c6018
label_0x1c5fa8:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001c5fa8: lw $v0, 0x10($s0)
    if (v0 == 0) goto label_0x1c5fc0;                           // 0x001c5fac: beqz $v0, 0x1c5fc0
    /* nop */                                                   // 0x001c5fb0: nop 
    v0 = v0 + -1;                                               // 0x001c5fb4: addiu $v0, $v0, -1
    goto label_0x1c6010;                                        // 0x001c5fb8: b 0x1c6010
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c5fbc: sw $v0, 0x10($s0)
label_0x1c5fc0:
    v0 = v1 & 8;                                                // 0x001c5fc0: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1c5fdc;                           // 0x001c5fc4: beqz $v0, 0x1c5fdc
    v0 = v1 & 4;                                                // 0x001c5fc8: andi $v0, $v1, 4
    v0 = *(int32_t*)((s0) + 0x38);                              // 0x001c5fcc: lw $v0, 0x38($s0)
    if (v0 == 0) goto label_0x1c5ff4;                           // 0x001c5fd0: beqz $v0, 0x1c5ff4
    /* nop */                                                   // 0x001c5fd4: nop 
    v0 = v1 & 4;                                                // 0x001c5fd8: andi $v0, $v1, 4
label_0x1c5fdc:
    if (v0 == 0) goto label_0x1c6010;                           // 0x001c5fdc: beqz $v0, 0x1c6010
    /* nop */                                                   // 0x001c5fe0: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5fe4: lw $v1, 0x38($s0)
    v0 = 1;                                                     // 0x001c5fe8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c6010;                          // 0x001c5fec: bne $v1, $v0, 0x1c6010
    /* nop */                                                   // 0x001c5ff0: nop 
label_0x1c5ff4:
    func_001c7480();  // 0x1c7470                                // 0x001c5ff4: jal 0x1c7470
    /* nop */                                                   // 0x001c5ff8: nop 
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x001c5ffc: lw $v1, 0x38($s0)
    v0 = 5;                                                     // 0x001c6000: addiu $v0, $zero, 5
    v1 = v1 ^ 1;                                                // 0x001c6004: xori $v1, $v1, 1
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001c6008: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001c600c: sw $v0, 0x10($s0)
label_0x1c6010:
    v0 = 1;                                                     // 0x001c6010: addiu $v0, $zero, 1
label_0x1c6014:
label_0x1c6018:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6018: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c601c: jr $ra
    sp = sp + 0x20;                                             // 0x001c6020: addiu $sp, $sp, 0x20
}