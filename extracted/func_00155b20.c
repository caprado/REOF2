void func_00155b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x155b20:
    sp = sp + -0x10;                                            // 0x00155b20: addiu $sp, $sp, -0x10
    return func_00107b68();  // Tail call                        // 0x00155b2c: j 0x107ab8
    sp = sp + 0x10;                                             // 0x00155b30: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155b34: nop 
label_0x155b38:
    sp = sp + -0x10;                                            // 0x00155b38: addiu $sp, $sp, -0x10
    return func_00107b68();  // Tail call                        // 0x00155b44: j 0x107ab8
    sp = sp + 0x10;                                             // 0x00155b48: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155b4c: nop 
label_0x155b50:
    sp = sp + -0x10;                                            // 0x00155b50: addiu $sp, $sp, -0x10
    return func_00107b68();  // Tail call                        // 0x00155b5c: j 0x107ab8
    sp = sp + 0x10;                                             // 0x00155b60: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155b64: nop 
label_0x155b68:
    sp = sp + -0x10;                                            // 0x00155b68: addiu $sp, $sp, -0x10
    return func_00107b68();  // Tail call                        // 0x00155b74: j 0x107ab8
    sp = sp + 0x10;                                             // 0x00155b78: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155b7c: nop 
    sp = sp + -0x10;                                            // 0x00155b80: addiu $sp, $sp, -0x10
    goto label_0x155b20;                                        // 0x00155b8c: j 0x155b20
    sp = sp + 0x10;                                             // 0x00155b90: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155b94: nop 
    sp = sp + -0x10;                                            // 0x00155b98: addiu $sp, $sp, -0x10
    goto label_0x155b38;                                        // 0x00155ba4: j 0x155b38
    sp = sp + 0x10;                                             // 0x00155ba8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155bac: nop 
    sp = sp + -0x10;                                            // 0x00155bb0: addiu $sp, $sp, -0x10
    goto label_0x155b50;                                        // 0x00155bbc: j 0x155b50
    sp = sp + 0x10;                                             // 0x00155bc0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155bc4: nop 
    sp = sp + -0x10;                                            // 0x00155bc8: addiu $sp, $sp, -0x10
    goto label_0x155b68;                                        // 0x00155bd4: j 0x155b68
    sp = sp + 0x10;                                             // 0x00155bd8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00155bdc: nop 
    v1 = a2 & 0x1f;                                             // 0x00155be0: andi $v1, $a2, 0x1f
    /* beqzl $v1, 0x155c10 */                                   // 0x00155be4: beqzl $v1, 0x155c10
    a2 = (unsigned)a2 >> 5;                                     // 0x00155be8: srl $a2, $a2, 5
    /* nop */                                                   // 0x00155bec: nop 
label_0x155bf0:
    v0 = *(uint8_t*)(a1);                                       // 0x00155bf0: lbu $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155bf4: addiu $a1, $a1, 1
    v1 = v1 + -1;                                               // 0x00155bf8: addiu $v1, $v1, -1
    *(uint8_t*)(a0) = v0;                                       // 0x00155bfc: sb $v0, 0($a0)
    /* nop */                                                   // 0x00155c00: nop 
    if (v1 != 0) goto label_0x155bf0;                           // 0x00155c04: bnez $v1, 0x155bf0
    a0 = a0 + 1;                                                // 0x00155c08: addiu $a0, $a0, 1
    a2 = (unsigned)a2 >> 5;                                     // 0x00155c0c: srl $a2, $a2, 5
    if (a2 == 0) goto label_0x155da8;                           // 0x00155c10: beqz $a2, 0x155da8
    /* nop */                                                   // 0x00155c14: nop 
label_0x155c18:
    t0 = *(int8_t*)(a1);                                        // 0x00155c18: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c1c: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155c20: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c24: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155c28: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c2c: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155c30: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c34: addiu $a1, $a1, 1
    *(uint8_t*)(a0) = t0;                                       // 0x00155c38: sb $t0, 0($a0)
    a2 = a2 + -1;                                               // 0x00155c3c: addiu $a2, $a2, -1
    *(uint8_t*)((a0) + 1) = a3;                                 // 0x00155c40: sb $a3, 1($a0)
    *(uint8_t*)((a0) + 2) = v1;                                 // 0x00155c44: sb $v1, 2($a0)
    *(uint8_t*)((a0) + 3) = v0;                                 // 0x00155c48: sb $v0, 3($a0)
    t0 = *(int8_t*)(a1);                                        // 0x00155c4c: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c50: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155c54: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c58: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155c5c: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c60: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155c64: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c68: addiu $a1, $a1, 1
    *(uint8_t*)((a0) + 4) = t0;                                 // 0x00155c6c: sb $t0, 4($a0)
    *(uint8_t*)((a0) + 5) = a3;                                 // 0x00155c70: sb $a3, 5($a0)
    *(uint8_t*)((a0) + 6) = v1;                                 // 0x00155c74: sb $v1, 6($a0)
    *(uint8_t*)((a0) + 7) = v0;                                 // 0x00155c78: sb $v0, 7($a0)
    t0 = *(int8_t*)(a1);                                        // 0x00155c7c: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c80: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155c84: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c88: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155c8c: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c90: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155c94: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155c98: addiu $a1, $a1, 1
    *(uint8_t*)((a0) + 8) = t0;                                 // 0x00155c9c: sb $t0, 8($a0)
    *(uint8_t*)((a0) + 9) = a3;                                 // 0x00155ca0: sb $a3, 9($a0)
    *(uint8_t*)((a0) + 0xa) = v1;                               // 0x00155ca4: sb $v1, 0xa($a0)
    *(uint8_t*)((a0) + 0xb) = v0;                               // 0x00155ca8: sb $v0, 0xb($a0)
    t0 = *(int8_t*)(a1);                                        // 0x00155cac: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155cb0: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155cb4: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155cb8: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155cbc: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155cc0: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155cc4: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155cc8: addiu $a1, $a1, 1
    *(uint8_t*)((a0) + 0xc) = t0;                               // 0x00155ccc: sb $t0, 0xc($a0)
    *(uint8_t*)((a0) + 0xd) = a3;                               // 0x00155cd0: sb $a3, 0xd($a0)
    *(uint8_t*)((a0) + 0xe) = v1;                               // 0x00155cd4: sb $v1, 0xe($a0)
    *(uint8_t*)((a0) + 0xf) = v0;                               // 0x00155cd8: sb $v0, 0xf($a0)
    a0 = a0 + 0x10;                                             // 0x00155cdc: addiu $a0, $a0, 0x10
    t0 = *(int8_t*)(a1);                                        // 0x00155ce0: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155ce4: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155ce8: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155cec: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155cf0: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155cf4: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155cf8: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155cfc: addiu $a1, $a1, 1
    *(uint8_t*)(a0) = t0;                                       // 0x00155d00: sb $t0, 0($a0)
    *(uint8_t*)((a0) + 1) = a3;                                 // 0x00155d04: sb $a3, 1($a0)
    *(uint8_t*)((a0) + 2) = v1;                                 // 0x00155d08: sb $v1, 2($a0)
    *(uint8_t*)((a0) + 3) = v0;                                 // 0x00155d0c: sb $v0, 3($a0)
    t0 = *(int8_t*)(a1);                                        // 0x00155d10: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d14: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155d18: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d1c: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155d20: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d24: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155d28: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d2c: addiu $a1, $a1, 1
    *(uint8_t*)((a0) + 4) = t0;                                 // 0x00155d30: sb $t0, 4($a0)
    *(uint8_t*)((a0) + 5) = a3;                                 // 0x00155d34: sb $a3, 5($a0)
    *(uint8_t*)((a0) + 6) = v1;                                 // 0x00155d38: sb $v1, 6($a0)
    *(uint8_t*)((a0) + 7) = v0;                                 // 0x00155d3c: sb $v0, 7($a0)
    t0 = *(int8_t*)(a1);                                        // 0x00155d40: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d44: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155d48: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d4c: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155d50: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d54: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155d58: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d5c: addiu $a1, $a1, 1
    *(uint8_t*)((a0) + 8) = t0;                                 // 0x00155d60: sb $t0, 8($a0)
    *(uint8_t*)((a0) + 9) = a3;                                 // 0x00155d64: sb $a3, 9($a0)
    *(uint8_t*)((a0) + 0xa) = v1;                               // 0x00155d68: sb $v1, 0xa($a0)
    *(uint8_t*)((a0) + 0xb) = v0;                               // 0x00155d6c: sb $v0, 0xb($a0)
    t0 = *(int8_t*)(a1);                                        // 0x00155d70: lb $t0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d74: addiu $a1, $a1, 1
    a3 = *(int8_t*)(a1);                                        // 0x00155d78: lb $a3, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d7c: addiu $a1, $a1, 1
    v1 = *(int8_t*)(a1);                                        // 0x00155d80: lb $v1, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d84: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a1);                                        // 0x00155d88: lb $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x00155d8c: addiu $a1, $a1, 1
    *(uint8_t*)((a0) + 0xc) = t0;                               // 0x00155d90: sb $t0, 0xc($a0)
    *(uint8_t*)((a0) + 0xd) = a3;                               // 0x00155d94: sb $a3, 0xd($a0)
    *(uint8_t*)((a0) + 0xe) = v1;                               // 0x00155d98: sb $v1, 0xe($a0)
    *(uint8_t*)((a0) + 0xf) = v0;                               // 0x00155d9c: sb $v0, 0xf($a0)
    if (a2 != 0) goto label_0x155c18;                           // 0x00155da0: bnez $a2, 0x155c18
    a0 = a0 + 0x10;                                             // 0x00155da4: addiu $a0, $a0, 0x10
label_0x155da8:
    return;                                                     // 0x00155da8: jr $ra
    /* nop */                                                   // 0x00155dac: nop 
}