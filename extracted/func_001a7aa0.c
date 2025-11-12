void func_001a7aa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t6 = (unsigned)a0 >> 0x18;                                  // 0x001a7aa0: srl $t6, $a0, 0x18
    t4 = t6 & 1;                                                // 0x001a7aa4: andi $t4, $t6, 1
    if (t4 == 0) goto label_0x1a7ab4;                           // 0x001a7aa8: beqz $t4, 0x1a7ab4
    t5 = 4;                                                     // 0x001a7aac: addiu $t5, $zero, 4
    t5 = t5 + 1;                                                // 0x001a7ab0: addiu $t5, $t5, 1
label_0x1a7ab4:
    t3 = t6 & 2;                                                // 0x001a7ab4: andi $t3, $t6, 2
    if (t3 == 0) goto label_0x1a7ac4;                           // 0x001a7ab8: beqz $t3, 0x1a7ac4
    t2 = t6 & 4;                                                // 0x001a7abc: andi $t2, $t6, 4
    t5 = t5 + 1;                                                // 0x001a7ac0: addiu $t5, $t5, 1
label_0x1a7ac4:
    if (t2 == 0) goto label_0x1a7ad0;                           // 0x001a7ac4: beqz $t2, 0x1a7ad0
    at = 0x2a << 16;                                            // 0x001a7ac8: lui $at, 0x2a
    t5 = t5 + 2;                                                // 0x001a7acc: addiu $t5, $t5, 2
label_0x1a7ad0:
    t1 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7ad0: lw $t1, 0xf68($at)
    v0 = t1 + t5;                                               // 0x001a7ad4: addu $v0, $t1, $t5
    v0 = (v0 < 0x200) ? 1 : 0;                                  // 0x001a7ad8: slti $v0, $v0, 0x200
    if (v0 != 0) goto label_0x1a7aec;                           // 0x001a7adc: bnez $v0, 0x1a7aec
    v0 = 0x2a << 16;                                            // 0x001a7ae0: lui $v0, 0x2a
    goto label_0x1a7b6c;                                        // 0x001a7ae4: b 0x1a7b6c
    v0 = -1;                                                    // 0x001a7ae8: addiu $v0, $zero, -1
label_0x1a7aec:
    v1 = (unsigned)a0 >> 0x10;                                  // 0x001a7aec: srl $v1, $a0, 0x10
    v0 = v0 + 0x11c0;                                           // 0x001a7af0: addiu $v0, $v0, 0x11c0
    t1 = v0 + t1;                                               // 0x001a7af4: addu $t1, $v0, $t1
    *(uint8_t*)(t1) = t6;                                       // 0x001a7af8: sb $t6, 0($t1)
    v0 = (unsigned)a0 >> 8;                                     // 0x001a7afc: srl $v0, $a0, 8
    *(uint8_t*)((t1) + 1) = v1;                                 // 0x001a7b00: sb $v1, 1($t1)
    *(uint8_t*)((t1) + 2) = v0;                                 // 0x001a7b04: sb $v0, 2($t1)
    *(uint8_t*)((t1) + 3) = a0;                                 // 0x001a7b08: sb $a0, 3($t1)
    if (t4 == 0) goto label_0x1a7b1c;                           // 0x001a7b0c: beqz $t4, 0x1a7b1c
    t1 = t1 + 4;                                                // 0x001a7b10: addiu $t1, $t1, 4
    *(uint8_t*)(t1) = a1;                                       // 0x001a7b14: sb $a1, 0($t1)
    t1 = t1 + 1;                                                // 0x001a7b18: addiu $t1, $t1, 1
label_0x1a7b1c:
    if (t3 == 0) goto label_0x1a7b2c;                           // 0x001a7b1c: beqz $t3, 0x1a7b2c
    /* nop */                                                   // 0x001a7b20: nop 
    *(uint8_t*)(t1) = a2;                                       // 0x001a7b24: sb $a2, 0($t1)
    t1 = t1 + 1;                                                // 0x001a7b28: addiu $t1, $t1, 1
label_0x1a7b2c:
    if (t2 == 0) goto label_0x1a7b44;                           // 0x001a7b2c: beqz $t2, 0x1a7b44
    v1 = a3 & 0xffff;                                           // 0x001a7b30: andi $v1, $a3, 0xffff
    v0 = v1 >> 8;                                               // 0x001a7b34: sra $v0, $v1, 8
    *(uint8_t*)(t1) = v0;                                       // 0x001a7b38: sb $v0, 0($t1)
    *(uint8_t*)((t1) + 1) = v1;                                 // 0x001a7b3c: sb $v1, 1($t1)
    t1 = t1 + 2;                                                // 0x001a7b40: addiu $t1, $t1, 2
label_0x1a7b44:
    *(uint8_t*)(t1) = t0;                                       // 0x001a7b44: sb $t0, 0($t1)
    at = 0x2a << 16;                                            // 0x001a7b48: lui $at, 0x2a
    a0 = g_002a0f68;  // Global at 0x002a0f68                   // 0x001a7b4c: lw $a0, 0xf68($at)
    a1 = t5 + 1;                                                // 0x001a7b50: addiu $a1, $t5, 1
    v1 = 0xff;                                                  // 0x001a7b54: addiu $v1, $zero, 0xff
    a0 = a0 + a1;                                               // 0x001a7b5c: addu $a0, $a0, $a1
    at = 0x2a << 16;                                            // 0x001a7b60: lui $at, 0x2a
    g_002a0f68 = a0;  // Global at 0x002a0f68                   // 0x001a7b64: sw $a0, 0xf68($at)
    *(uint8_t*)((t1) + 1) = v1;                                 // 0x001a7b68: sb $v1, 1($t1)
label_0x1a7b6c:
    return;                                                     // 0x001a7b6c: jr $ra
    /* nop */                                                   // 0x001a7b70: nop 
}