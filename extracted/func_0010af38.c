void func_0010af38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = t0 & 7;                                                // 0x0010af3c: andi $v0, $t0, 7
    /* bnezl $v0, 0x10b054 */                                   // 0x0010af40: bnezl $v0, 0x10b054
    v0 = g_80800004;  // Global at 0x80800004                   // 0x0010af44: lb $v0, 0($a0)
    v1 = t0 & 0xf;                                              // 0x0010af48: andi $v1, $t0, 0xf
    /* bnezl $v1, 0x10afe4 */                                   // 0x0010af4c: bnezl $v1, 0x10afe4
    a3 = 0x101 << 16;                                           // 0x0010af54: lui $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010af58: ori $a3, $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010af60: ori $a3, $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010af68: ori $a3, $a3, 0x101
    /* FPU: ori.b $w0, $w0, 2 */                                // 0x0010af6c: ori.b $w0, $w0, 2
    a0 = 0x8080 << 16;                                          // 0x0010af74: lui $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010af78: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010af80: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010af88: ori $a0, $a0, 0x8080
    v1 = v1 | v0;                                               // 0x0010afa4: or $v1, $v1, $v0
    if (v1 != 0) goto label_0x10b04c;                           // 0x0010afa8: bnez $v1, 0x10b04c
    a3 = a3 + 0x10;                                             // 0x0010afb0: addiu $a3, $a3, 0x10
    /* nop */                                                   // 0x0010afb4: nop 
label_0x10afb8:
    /* FPU: andi.b $w0, $w0, 0xe2 */                            // 0x0010afb8: andi.b $w0, $w0, 0xe2
    v0 = v0 | v1;                                               // 0x0010afd0: or $v0, $v0, $v1
    if (v0 == 0) goto label_0x10afb8;                           // 0x0010afd4: beqz $v0, 0x10afb8
    a3 = a3 + 0x10;                                             // 0x0010afd8: addiu $a3, $a3, 0x10
    goto label_0x10b04c;                                        // 0x0010afdc: b 0x10b04c
    a3 = a3 + -0x10;                                            // 0x0010afe0: addiu $a3, $a3, -0x10
    t1 = 0x101 << 16;                                           // 0x0010afe4: lui $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010afe8: ori $t1, $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010aff0: ori $t1, $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010aff8: ori $t1, $t1, 0x101
    a0 = 0x8080 << 16;                                          // 0x0010affc: lui $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010b000: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010b008: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010b010: ori $a0, $a0, 0x8080
    v0 = ~(0 | v0);                                             // 0x0010b018: nor $v0, $zero, $v0
    v1 = v1 & v0;                                               // 0x0010b01c: and $v1, $v1, $v0
    v1 = v1 & a0;                                               // 0x0010b020: and $v1, $v1, $a0
    if (v1 != 0) goto label_0x10b04c;                           // 0x0010b024: bnez $v1, 0x10b04c
    a3 = a3 + 8;                                                // 0x0010b02c: addiu $a3, $a3, 8
    v1 = ~(0 | v0);                                             // 0x0010b034: nor $v1, $zero, $v0
    v0 = v0 & v1;                                               // 0x0010b03c: and $v0, $v0, $v1
    v0 = v0 & a0;                                               // 0x0010b040: and $v0, $v0, $a0
    /* beqzl $v0, 0x10b030 */                                   // 0x0010b044: beqzl $v0, 0x10b030
    a3 = a3 + 8;                                                // 0x0010b048: addiu $a3, $a3, 8
label_0x10b04c:
    v0 = g_80800000;  // Global at 0x80800000                   // 0x0010b050: lb $v0, 0($a0)
    if (v0 == 0) goto label_0x10b07c;                           // 0x0010b054: beqz $v0, 0x10b07c
    a2 = a2 + -1;                                               // 0x0010b058: addiu $a2, $a2, -1
    a0 = a0 + 1;                                                // 0x0010b05c: addiu $a0, $a0, 1
    v0 = g_80800001;  // Global at 0x80800001                   // 0x0010b060: lb $v0, 0($a0)
    /* nop */                                                   // 0x0010b064: nop 
    /* nop */                                                   // 0x0010b068: nop 
    /* nop */                                                   // 0x0010b06c: nop 
    /* nop */                                                   // 0x0010b070: nop 
    /* bnezl $v0, 0x10b060 */                                   // 0x0010b074: bnezl $v0, 0x10b060
    a0 = a0 + 1;                                                // 0x0010b078: addiu $a0, $a0, 1
label_0x10b07c:
    v0 = 0xffff << 16;                                          // 0x0010b07c: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0010b080: ori $v0, $v0, 0xffff
    if (a2 == v0) goto label_0x10b0dc;                          // 0x0010b084: beq $a2, $v0, 0x10b0dc
    /* nop */                                                   // 0x0010b088: nop 
    v0 = *(uint8_t*)(a1);                                       // 0x0010b08c: lbu $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x0010b090: addiu $a1, $a1, 1
    g_80800002 = v0;  // Global at 0x80800002                   // 0x0010b094: sb $v0, 0($a0)
    v0 = v0 << 0x18;                                            // 0x0010b098: sll $v0, $v0, 0x18
    if (v0 == 0) goto label_0x10b0dc;                           // 0x0010b09c: beqz $v0, 0x10b0dc
    a0 = a0 + 1;                                                // 0x0010b0a0: addiu $a0, $a0, 1
    v1 = 0xffff << 16;                                          // 0x0010b0a4: lui $v1, 0xffff
    v1 = v1 | 0xffff;                                           // 0x0010b0a8: ori $v1, $v1, 0xffff
    /* nop */                                                   // 0x0010b0ac: nop 
label_0x10b0b0:
    /* beqzl $a2, 0x10b0b8 */                                   // 0x0010b0b0: beqzl $a2, 0x10b0b8
    g_80800003 = 0;  // Global at 0x80800003                    // 0x0010b0b4: sb $zero, 0($a0)
    a2 = a2 + -1;                                               // 0x0010b0b8: addiu $a2, $a2, -1
    if (a2 == v1) goto label_0x10b0dc;                          // 0x0010b0bc: beq $a2, $v1, 0x10b0dc
    /* nop */                                                   // 0x0010b0c0: nop 
    v0 = *(uint8_t*)(a1);                                       // 0x0010b0c4: lbu $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x0010b0c8: addiu $a1, $a1, 1
    g_80800003 = v0;  // Global at 0x80800003                   // 0x0010b0cc: sb $v0, 0($a0)
    v0 = v0 << 0x18;                                            // 0x0010b0d0: sll $v0, $v0, 0x18
    if (v0 != 0) goto label_0x10b0b0;                           // 0x0010b0d4: bnez $v0, 0x10b0b0
    a0 = a0 + 1;                                                // 0x0010b0d8: addiu $a0, $a0, 1
label_0x10b0dc:
    return;                                                     // 0x0010b0dc: jr $ra
}