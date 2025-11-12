void func_001da8f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_60, local_68;
    
    sp = sp + -0x70;                                            // 0x001da8f0: addiu $sp, $sp, -0x70
    at = 0x31 << 16;                                            // 0x001da8f4: lui $at, 0x31
    a2 = 0x30 << 16;                                            // 0x001da904: lui $a2, 0x30
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001da908: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001da910: addu.qb $zero, $sp, $s1
    a0 = g_00313810;  // Global at 0x00313810                   // 0x001da918: lw $a0, 0x3810($at)
    s0 = 0x31 << 16;                                            // 0x001da91c: lui $s0, 0x31
    func_00107d30();  // 0x107c70                                // 0x001da920: jal 0x107c70
    s0 = s0 + 0x37a0;                                           // 0x001da924: addiu $s0, $s0, 0x37a0
    func_001da8f0();  // 0x1da850                                // 0x001da928: jal 0x1da850
    /* nop */                                                   // 0x001da92c: nop 
    at = 0x31 << 16;                                            // 0x001da930: lui $at, 0x31
    a3 = g_00313810;  // Global at 0x00313810                   // 0x001da938: lw $a3, 0x3810($at)
label_0x1da93c:
    at = 0x31 << 16;                                            // 0x001da93c: lui $at, 0x31
    a2 = a2 + 1;                                                // 0x001da940: addiu $a2, $a2, 1
    a1 = g_00313810;  // Global at 0x00313810                   // 0x001da944: lw $a1, 0x3810($at)
    v1 = ((unsigned)a2 < (unsigned)0x20) ? 1 : 0;               // 0x001da948: sltiu $v1, $a2, 0x20
    a0 = *(int32_t*)(a3);                                       // 0x001da94c: lw $a0, 0($a3)
    a0 = a1 + a0;                                               // 0x001da950: addu $a0, $a1, $a0
    *(uint32_t*)(a3) = a0;                                      // 0x001da954: sw $a0, 0($a3)
    if (v1 != 0) goto label_0x1da93c;                           // 0x001da958: bnez $v1, 0x1da93c
    a3 = a3 + 8;                                                // 0x001da95c: addiu $a3, $a3, 8
    at = 0x31 << 16;                                            // 0x001da960: lui $at, 0x31
    s4 = g_00313810;  // Global at 0x00313810                   // 0x001da964: lw $s4, 0x70($s0)
    a1 = g_00313810;  // Global at 0x00313810                   // 0x001da968: lw $a1, 0x3810($at)
    a0 = 0x18 << 16;                                            // 0x001da96c: lui $a0, 0x18
    s3 = 0x22 << 16;                                            // 0x001da970: lui $s3, 0x22
    v1 = -4;                                                    // 0x001da974: addiu $v1, $zero, -4
    s1 = sp + 0x64;                                             // 0x001da978: addiu $s1, $sp, 0x64
    s3 = s3 + -0x4c0;                                           // 0x001da97c: addiu $s3, $s3, -0x4c0
    s2 = sp + 0x6c;                                             // 0x001da980: addiu $s2, $sp, 0x6c
    local_60 = 0;                                               // 0x001da984: sw $zero, 0x60($sp)
    a0 = a1 + a0;                                               // 0x001da988: addu $a0, $a1, $a0
    local_68 = a0;                                              // 0x001da98c: sw $a0, 0x68($sp)
    a0 = local_68;                                              // 0x001da990: lw $a0, 0x68($sp)
    a0 = a0 + 3;                                                // 0x001da994: addiu $a0, $a0, 3
    v1 = a0 & v1;                                               // 0x001da998: and $v1, $a0, $v1
    local_68 = v1;                                              // 0x001da99c: sw $v1, 0x68($sp)
    goto label_0x1dab00;                                        // 0x001da9a0: b 0x1dab00
    *(uint32_t*)(s1) = 0;                                       // 0x001da9a4: sw $zero, 0($s1)
label_0x1da9a8:
    a1 = g_0021fb44;  // Global at 0x0021fb44                   // 0x001da9a8: lw $a1, 4($s3)
    v1 = 0x63;                                                  // 0x001da9ac: addiu $v1, $zero, 0x63
    if (a1 == v1) goto label_0x1daa54;                          // 0x001da9b0: beq $a1, $v1, 0x1daa54
    /* nop */                                                   // 0x001da9b4: nop 
    a0 = g_0021fb48;  // Global at 0x0021fb48                   // 0x001da9b8: lw $a0, 8($s3)
    if (a0 == v1) goto label_0x1daa54;                          // 0x001da9bc: beq $a0, $v1, 0x1daa54
    /* nop */                                                   // 0x001da9c0: nop 
    v1 = a1 << 3;                                               // 0x001da9c4: sll $v1, $a1, 3
    s0 = s4 + v1;                                               // 0x001da9c8: addu $s0, $s4, $v1
    v1 = g_003137a0;  // Global at 0x003137a0                   // 0x001da9cc: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x1daa4c;                           // 0x001da9d0: beqz $v1, 0x1daa4c
    v1 = a0 << 2;                                               // 0x001da9d4: sll $v1, $a0, 2
    v1 = g_003137a4;  // Global at 0x003137a4                   // 0x001da9d8: lw $v1, 4($s0)
    if (v1 == 0) goto label_0x1daa48;                           // 0x001da9dc: beqz $v1, 0x1daa48
    /* nop */                                                   // 0x001da9e0: nop 
    v0 = 1;                                                     // 0x001da9e4: addiu $v0, $zero, 1
    if (a0 != v0) goto label_0x1daa14;                          // 0x001da9e8: bne $a0, $v0, 0x1daa14
    /* nop */                                                   // 0x001da9ec: nop 
    a0 = local_68;                                              // 0x001da9f0: lw $a0, 0x68($sp)
    v0 = -4;                                                    // 0x001da9f4: addiu $v0, $zero, -4
    v1 = local_60;                                              // 0x001da9f8: lw $v1, 0x60($sp)
    v1 = a0 + v1;                                               // 0x001da9fc: addu $v1, $a0, $v1
    *(uint32_t*)(s2) = v1;                                      // 0x001daa00: sw $v1, 0($s2)
    v1 = *(int32_t*)(s2);                                       // 0x001daa04: lw $v1, 0($s2)
    v1 = v1 + 3;                                                // 0x001daa08: addiu $v1, $v1, 3
    v0 = v1 & v0;                                               // 0x001daa0c: and $v0, $v1, $v0
    *(uint32_t*)(s2) = v0;                                      // 0x001daa10: sw $v0, 0($s2)
label_0x1daa14:
    v0 = g_0021fb48;  // Global at 0x0021fb48                   // 0x001daa14: lw $v0, 8($s3)
    a1 = g_003137a0;  // Global at 0x003137a0                   // 0x001daa18: lw $a1, 0($s0)
    v0 = v0 << 2;                                               // 0x001daa1c: sll $v0, $v0, 2
    v0 = v0 + sp;                                               // 0x001daa20: addu $v0, $v0, $sp
    a0 = *(int32_t*)((v0) + 0x68);                              // 0x001daa24: lw $a0, 0x68($v0)
    func_0018da60();  // 0x18da10                                // 0x001daa28: jal 0x18da10
    a2 = g_003137a4;  // Global at 0x003137a4                   // 0x001daa2c: lw $a2, 4($s0)
    v1 = g_0021fb48;  // Global at 0x0021fb48                   // 0x001daa30: lw $v1, 8($s3)
    a0 = g_003137a4;  // Global at 0x003137a4                   // 0x001daa34: lw $a0, 4($s0)
    v1 = v1 << 2;                                               // 0x001daa38: sll $v1, $v1, 2
    v1 = v1 + sp;                                               // 0x001daa3c: addu $v1, $v1, $sp
    goto label_0x1daa54;                                        // 0x001daa40: b 0x1daa54
    *(uint32_t*)((v1) + 0x60) = a0;                             // 0x001daa44: sw $a0, 0x60($v1)
label_0x1daa48:
    v1 = a0 << 2;                                               // 0x001daa48: sll $v1, $a0, 2
label_0x1daa4c:
    v1 = v1 + sp;                                               // 0x001daa4c: addu $v1, $v1, $sp
    *(uint32_t*)((v1) + 0x60) = 0;                              // 0x001daa50: sw $zero, 0x60($v1)
label_0x1daa54:
    a2 = g_0021fb40;  // Global at 0x0021fb40                   // 0x001daa54: lw $a2, 0($s3)
    if (a2 == 0) goto label_0x1daafc;                           // 0x001daa58: beqz $a2, 0x1daafc
    /* nop */                                                   // 0x001daa5c: nop 
    a0 = g_0021fb4c;  // Global at 0x0021fb4c                   // 0x001daa60: lw $a0, 0xc($s3)
    v1 = 2;                                                     // 0x001daa64: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1daad8;                          // 0x001daa68: beq $a0, $v1, 0x1daad8
    v1 = 1;                                                     // 0x001daa6c: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1daabc;                          // 0x001daa70: beq $a0, $v1, 0x1daabc
    /* nop */                                                   // 0x001daa74: nop 
    if (a0 == 0) goto label_0x1daaa0;                           // 0x001daa78: beqz $a0, 0x1daaa0
    v1 = 0x63;                                                  // 0x001daa7c: addiu $v1, $zero, 0x63
    if (a0 == v1) goto label_0x1daa90;                          // 0x001daa80: beq $a0, $v1, 0x1daa90
    /* nop */                                                   // 0x001daa84: nop 
    goto label_0x1dab00;                                        // 0x001daa88: b 0x1dab00
    s3 = s3 + 0x10;                                             // 0x001daa8c: addiu $s3, $s3, 0x10
label_0x1daa90:
    /* call function at address in a2 */                        // 0x001daa90: jalr $a2
    /* nop */                                                   // 0x001daa94: nop 
    goto label_0x1daafc;                                        // 0x001daa98: b 0x1daafc
    /* nop */                                                   // 0x001daa9c: nop 
label_0x1daaa0:
    a1 = local_60;                                              // 0x001daaa0: lw $a1, 0x60($sp)
    if (a1 == 0) goto label_0x1daafc;                           // 0x001daaa4: beqz $a1, 0x1daafc
    /* nop */                                                   // 0x001daaa8: nop 
    /* call function at address in a2 */                        // 0x001daaac: jalr $a2
    a0 = local_68;                                              // 0x001daab0: lw $a0, 0x68($sp)
    goto label_0x1daafc;                                        // 0x001daab4: b 0x1daafc
    /* nop */                                                   // 0x001daab8: nop 
label_0x1daabc:
    v1 = *(int32_t*)(s1);                                       // 0x001daabc: lw $v1, 0($s1)
    if (v1 == 0) goto label_0x1daafc;                           // 0x001daac0: beqz $v1, 0x1daafc
    /* nop */                                                   // 0x001daac4: nop 
    /* call function at address in a2 */                        // 0x001daac8: jalr $a2
    a0 = *(int32_t*)(s2);                                       // 0x001daacc: lw $a0, 0($s2)
    goto label_0x1daafc;                                        // 0x001daad0: b 0x1daafc
    /* nop */                                                   // 0x001daad4: nop 
label_0x1daad8:
    v1 = local_60;                                              // 0x001daad8: lw $v1, 0x60($sp)
    if (v1 == 0) goto label_0x1daafc;                           // 0x001daadc: beqz $v1, 0x1daafc
    /* nop */                                                   // 0x001daae0: nop 
    v1 = *(int32_t*)(s1);                                       // 0x001daae4: lw $v1, 0($s1)
    if (v1 == 0) goto label_0x1daafc;                           // 0x001daae8: beqz $v1, 0x1daafc
    /* nop */                                                   // 0x001daaec: nop 
    a1 = *(int32_t*)(s2);                                       // 0x001daaf0: lw $a1, 0($s2)
    /* call function at address in a2 */                        // 0x001daaf4: jalr $a2
    a0 = local_68;                                              // 0x001daaf8: lw $a0, 0x68($sp)
label_0x1daafc:
    s3 = s3 + 0x10;                                             // 0x001daafc: addiu $s3, $s3, 0x10
label_0x1dab00:
    a0 = g_0021fb6c;  // Global at 0x0021fb6c                   // 0x001dab00: lw $a0, 0xc($s3)
    v1 = 0x3e7;                                                 // 0x001dab04: addiu $v1, $zero, 0x3e7
    if (a0 != v1) goto label_0x1da9a8;                          // 0x001dab08: bne $a0, $v1, 0x1da9a8
    /* nop */                                                   // 0x001dab0c: nop 
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001dab14: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001dab1c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dab20: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dab24: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dab28: jr $ra
    sp = sp + 0x70;                                             // 0x001dab2c: addiu $sp, $sp, 0x70
}