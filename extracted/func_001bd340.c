void func_001bd340() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -5;                                                    // 0x001bd340: addiu $v0, $zero, -5
    if (a1 != v0) goto label_0x1bd354;                          // 0x001bd344: bne $a1, $v0, 0x1bd354
    /* nop */                                                   // 0x001bd348: nop 
    goto label_0x1bd35c;                                        // 0x001bd34c: b 0x1bd35c
    *(uint32_t*)((a0) + 8) = v0;                                // 0x001bd350: sw $v0, 8($a0)
label_0x1bd354:
    v0 = -0x63;                                                 // 0x001bd354: addiu $v0, $zero, -0x63
    *(uint32_t*)((a0) + 8) = v0;                                // 0x001bd358: sw $v0, 8($a0)
label_0x1bd35c:
    return func_001bdbb0();  // Tail call                        // 0x001bd35c: j 0x1bdb40
    /* nop */                                                   // 0x001bd360: nop 
    /* nop */                                                   // 0x001bd364: nop 
    /* nop */                                                   // 0x001bd368: nop 
    /* nop */                                                   // 0x001bd36c: nop 
    sp = sp + -0x20;                                            // 0x001bd370: addiu $sp, $sp, -0x20
    func_001bdd00();  // 1bdd00                                // 0x001bd37c: jal 0x1bdd00
    v1 = -2;                                                    // 0x001bd384: addiu $v1, $zero, -2
    if (v0 == v1) goto label_0x1bd3a8;                          // 0x001bd388: beq $v0, $v1, 0x1bd3a8
    if (v0 == 0) goto label_0x1bd3a8;                           // 0x001bd390: beqz $v0, 0x1bd3a8
    /* nop */                                                   // 0x001bd394: nop 
    func_001bd340();  // 1bd340                                // 0x001bd398: jal 0x1bd340
    goto label_0x1bd3b8;                                        // 0x001bd3a0: b 0x1bd3b8
label_0x1bd3a8:
    v1 = *(int32_t*)(s0);                                       // 0x001bd3a8: lw $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x001bd3ac: addiu $v1, $v1, 1
    *(uint32_t*)(s0) = v1;                                      // 0x001bd3b0: sw $v1, 0($s0)
label_0x1bd3b8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd3b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd3bc: jr $ra
    sp = sp + 0x20;                                             // 0x001bd3c0: addiu $sp, $sp, 0x20
}