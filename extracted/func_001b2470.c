void func_001b2470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c;
    
    sp = sp + -0x20;                                            // 0x001b2470: addiu $sp, $sp, -0x20
    v0 = 0x31 << 16;                                            // 0x001b2474: lui $v0, 0x31
    v0 = v0 + -0x5d50;                                          // 0x001b247c: addiu $v0, $v0, -0x5d50
    local_1c = v0;                                              // 0x001b2480: sw $v0, 0x1c($sp)
label_0x1b2484:
    func_001a5840();  // 1a5840                                // 0x001b2484: jal 0x1a5840
    a0 = sp + 0x1c;                                             // 0x001b2488: addiu $a0, $sp, 0x1c
    local_1c = v0;                                              // 0x001b248c: sw $v0, 0x1c($sp)
    a0 = local_1c;                                              // 0x001b2490: lw $a0, 0x1c($sp)
    if (a0 == 0) goto label_0x1b24b0;                           // 0x001b2494: beqz $a0, 0x1b24b0
    /* nop */                                                   // 0x001b2498: nop 
    v0 = *(int32_t*)((a0) + 0x1c);                              // 0x001b249c: lw $v0, 0x1c($a0)
    /* call function at address in v0 */                        // 0x001b24a0: jalr $v0
    /* nop */                                                   // 0x001b24a4: nop 
    goto label_0x1b2484;                                        // 0x001b24a8: b 0x1b2484
    /* nop */                                                   // 0x001b24ac: nop 
label_0x1b24b0:
    return;                                                     // 0x001b24b4: jr $ra
    sp = sp + 0x20;                                             // 0x001b24b8: addiu $sp, $sp, 0x20
}