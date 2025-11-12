void func_001b5fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)(a0);                                       // 0x001b5fa0: lw $v1, 0($a0)
    v0 = *(uint8_t*)(v1);                                       // 0x001b5fa4: lbu $v0, 0($v1)
    v1 = v1 + 1;                                                // 0x001b5fa8: addiu $v1, $v1, 1
    at = (v0 < 0x80) ? 1 : 0;                                   // 0x001b5fac: slti $at, $v0, 0x80
    if (at != 0) goto label_0x1b60bc;                           // 0x001b5fb0: bnez $at, 0x1b60bc
    *(uint32_t*)(a0) = v1;                                      // 0x001b5fb4: sw $v1, 0($a0)
    v1 = (v0 < 0xc0) ? 1 : 0;                                   // 0x001b5fb8: slti $v1, $v0, 0xc0
    if (v1 != 0) goto label_0x1b601c;                           // 0x001b5fbc: bnez $v1, 0x1b601c
    v1 = (v0 < 0xe0) ? 1 : 0;                                   // 0x001b5fc0: slti $v1, $v0, 0xe0
    at = (v0 < 0xe0) ? 1 : 0;                                   // 0x001b5fc4: slti $at, $v0, 0xe0
    if (at == 0) goto label_0x1b601c;                           // 0x001b5fc8: beqz $at, 0x1b601c
    /* nop */                                                   // 0x001b5fcc: nop 
    v1 = *(int32_t*)(a0);                                       // 0x001b5fd0: lw $v1, 0($a0)
    a2 = *(uint8_t*)(v1);                                       // 0x001b5fd4: lbu $a2, 0($v1)
    if (a2 != 0) goto label_0x1b5fe8;                           // 0x001b5fd8: bnez $a2, 0x1b5fe8
    a1 = v1 + 1;                                                // 0x001b5fdc: addiu $a1, $v1, 1
    goto label_0x1b60bc;                                        // 0x001b5fe0: b 0x1b60bc
    v0 = -1;                                                    // 0x001b5fe4: addiu $v0, $zero, -1
label_0x1b5fe8:
    v1 = (a2 < 0x80) ? 1 : 0;                                   // 0x001b5fe8: slti $v1, $a2, 0x80
    if (v1 != 0) goto label_0x1b6000;                           // 0x001b5fec: bnez $v1, 0x1b6000
    *(uint32_t*)(a0) = a1;                                      // 0x001b5ff0: sw $a1, 0($a0)
    at = (a2 < 0xc0) ? 1 : 0;                                   // 0x001b5ff4: slti $at, $a2, 0xc0
    if (at != 0) goto label_0x1b6008;                           // 0x001b5ff8: bnez $at, 0x1b6008
    /* nop */                                                   // 0x001b5ffc: nop 
label_0x1b6000:
    goto label_0x1b60bc;                                        // 0x001b6000: b 0x1b60bc
    v0 = -1;                                                    // 0x001b6004: addiu $v0, $zero, -1
label_0x1b6008:
    v0 = v0 & 0x1f;                                             // 0x001b6008: andi $v0, $v0, 0x1f
    v1 = a2 & 0x3f;                                             // 0x001b600c: andi $v1, $a2, 0x3f
    v0 = v0 << 6;                                               // 0x001b6010: sll $v0, $v0, 6
    goto label_0x1b60bc;                                        // 0x001b6014: b 0x1b60bc
    v0 = v0 | v1;                                               // 0x001b6018: or $v0, $v0, $v1
label_0x1b601c:
    if (v1 != 0) goto label_0x1b60b8;                           // 0x001b601c: bnez $v1, 0x1b60b8
    at = (v0 < 0xf0) ? 1 : 0;                                   // 0x001b6020: slti $at, $v0, 0xf0
    if (at == 0) goto label_0x1b60b8;                           // 0x001b6024: beqz $at, 0x1b60b8
    /* nop */                                                   // 0x001b6028: nop 
    v1 = *(int32_t*)(a0);                                       // 0x001b602c: lw $v1, 0($a0)
    a3 = *(uint8_t*)(v1);                                       // 0x001b6030: lbu $a3, 0($v1)
    if (a3 != 0) goto label_0x1b6044;                           // 0x001b6034: bnez $a3, 0x1b6044
    a1 = v1 + 1;                                                // 0x001b6038: addiu $a1, $v1, 1
    goto label_0x1b60bc;                                        // 0x001b603c: b 0x1b60bc
    v0 = -1;                                                    // 0x001b6040: addiu $v0, $zero, -1
label_0x1b6044:
    v1 = (a3 < 0x80) ? 1 : 0;                                   // 0x001b6044: slti $v1, $a3, 0x80
    if (v1 != 0) goto label_0x1b605c;                           // 0x001b6048: bnez $v1, 0x1b605c
    *(uint32_t*)(a0) = a1;                                      // 0x001b604c: sw $a1, 0($a0)
    at = (a3 < 0xc0) ? 1 : 0;                                   // 0x001b6050: slti $at, $a3, 0xc0
    if (at != 0) goto label_0x1b6064;                           // 0x001b6054: bnez $at, 0x1b6064
    /* nop */                                                   // 0x001b6058: nop 
label_0x1b605c:
    goto label_0x1b60bc;                                        // 0x001b605c: b 0x1b60bc
    v0 = -1;                                                    // 0x001b6060: addiu $v0, $zero, -1
label_0x1b6064:
    v1 = *(int32_t*)(a0);                                       // 0x001b6064: lw $v1, 0($a0)
    a2 = *(uint8_t*)(v1);                                       // 0x001b6068: lbu $a2, 0($v1)
    if (a2 != 0) goto label_0x1b607c;                           // 0x001b606c: bnez $a2, 0x1b607c
    a1 = v1 + 1;                                                // 0x001b6070: addiu $a1, $v1, 1
    goto label_0x1b60bc;                                        // 0x001b6074: b 0x1b60bc
    v0 = -1;                                                    // 0x001b6078: addiu $v0, $zero, -1
label_0x1b607c:
    v1 = (a2 < 0x80) ? 1 : 0;                                   // 0x001b607c: slti $v1, $a2, 0x80
    if (v1 != 0) goto label_0x1b6094;                           // 0x001b6080: bnez $v1, 0x1b6094
    *(uint32_t*)(a0) = a1;                                      // 0x001b6084: sw $a1, 0($a0)
    at = (a2 < 0xc0) ? 1 : 0;                                   // 0x001b6088: slti $at, $a2, 0xc0
    if (at != 0) goto label_0x1b609c;                           // 0x001b608c: bnez $at, 0x1b609c
    a0 = a3 & 0x3f;                                             // 0x001b6090: andi $a0, $a3, 0x3f
label_0x1b6094:
    goto label_0x1b60bc;                                        // 0x001b6094: b 0x1b60bc
    v0 = -1;                                                    // 0x001b6098: addiu $v0, $zero, -1
label_0x1b609c:
    v0 = v0 & 0xf;                                              // 0x001b609c: andi $v0, $v0, 0xf
    a0 = a0 << 6;                                               // 0x001b60a0: sll $a0, $a0, 6
    v0 = v0 << 0xc;                                             // 0x001b60a4: sll $v0, $v0, 0xc
    v1 = a2 & 0x3f;                                             // 0x001b60a8: andi $v1, $a2, 0x3f
    v0 = v0 | a0;                                               // 0x001b60ac: or $v0, $v0, $a0
    goto label_0x1b60bc;                                        // 0x001b60b0: b 0x1b60bc
    v0 = v1 | v0;                                               // 0x001b60b4: or $v0, $v1, $v0
label_0x1b60b8:
    v0 = -1;                                                    // 0x001b60b8: addiu $v0, $zero, -1
label_0x1b60bc:
    return;                                                     // 0x001b60bc: jr $ra
    /* nop */                                                   // 0x001b60c0: nop 
}