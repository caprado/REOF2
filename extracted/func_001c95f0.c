void func_001c95f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_24;
    
    sp = sp + -0x50;                                            // 0x001c95f0: addiu $sp, $sp, -0x50
    func_001c8240();  // 0x1c8170                                // 0x001c9600: jal 0x1c8170
    a0 = sp + 0x20;                                             // 0x001c9604: addiu $a0, $sp, 0x20
    if (v0 >= 0) goto label_0x1c9620;                           // 0x001c9610: bgez $v0, 0x1c9620
    /* nop */                                                   // 0x001c9614: nop 
    goto label_0x1c9658;                                        // 0x001c9618: b 0x1c9658
    /* nop */                                                   // 0x001c961c: nop 
label_0x1c9620:
    v1 = local_24;                                              // 0x001c9620: lw $v1, 0x24($sp)
    a0 = sp + 0x34;                                             // 0x001c9624: addiu $a0, $sp, 0x34
    *(uint32_t*)(s0) = v1;                                      // 0x001c9628: sw $v1, 0($s0)
    v1 = local_20;                                              // 0x001c962c: lw $v1, 0x20($sp)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001c9630: sw $v1, 4($s0)
    v1 = *(int32_t*)((a0) + 0x10);                              // 0x001c9634: lw $v1, 0x10($a0)
    *(uint32_t*)((s0) + 8) = v1;                                // 0x001c9638: sw $v1, 8($s0)
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x001c963c: lw $v1, 0x14($a0)
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x001c9640: sw $v1, 0xc($s0)
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001c9644: lw $v1, 8($a0)
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001c9648: sw $v1, 0x10($s0)
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x001c964c: lw $v1, 0xc($a0)
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x001c9650: sw $v1, 0x14($s0)
    /* nop */                                                   // 0x001c9654: nop 
label_0x1c9658:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c965c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c9660: jr $ra
    sp = sp + 0x50;                                             // 0x001c9664: addiu $sp, $sp, 0x50
}