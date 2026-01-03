void func_00162938() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00162938: addiu $sp, $sp, -0x10
    goto label_0x162950;                                        // 0x00162944: j 0x162950
    sp = sp + 0x10;                                             // 0x00162948: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016294c: nop 
label_0x162950:
    sp = sp + -0x30;                                            // 0x00162950: addiu $sp, $sp, -0x30
    s0 = a0 + 0x1ec;                                            // 0x0016295c: addiu $s0, $a0, 0x1ec
    s1 = *(int32_t*)((a0) + 0x40);                              // 0x0016297c: lw $s1, 0x40($a0)
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x00162980: lw $a1, 0x10($s0)
    s2 = *(int32_t*)((s0) + 0xc);                               // 0x00162984: lw $s2, 0xc($s0)
    func_00169cb0();  // 169cb0                                // 0x0016298c: jal 0x169cb0
    a1 = a1 + 0xc0;                                             // 0x00162990: addiu $a1, $a1, 0xc0
    a1 = s3 + 0xc0;                                             // 0x00162998: addiu $a1, $s3, 0xc0
    func_00169cb0();  // 169cb0                                // 0x001629a4: jal 0x169cb0
    *(uint32_t*)((s0) + 0x10) = s3;                             // 0x001629ac: sw $s3, 0x10($s0)
    return;                                                     // 0x001629c4: jr $ra
    sp = sp + 0x30;                                             // 0x001629c8: addiu $sp, $sp, 0x30
}