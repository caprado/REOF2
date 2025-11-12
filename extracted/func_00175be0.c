void func_00175be0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00175be0: addiu $sp, $sp, -0x10
    func_001752f8();  // 0x1752e8                                // 0x00175bf0: jal 0x1752e8
    a1 = 0x47;                                                  // 0x00175bf4: addiu $a1, $zero, 0x47
    v1 = 1;                                                     // 0x00175bf8: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x175c10;                          // 0x00175bfc: bne $v0, $v1, 0x175c10
    /* nop */                                                   // 0x00175c00: nop 
    v0 = *(int32_t*)((s0) + 0x264);                             // 0x00175c04: lw $v0, 0x264($s0)
    goto label_0x175c18;                                        // 0x00175c08: b 0x175c18
    *(uint32_t*)((s0) + 0x28c) = v0;                            // 0x00175c0c: sw $v0, 0x28c($s0)
label_0x175c10:
    v0 = *(int32_t*)((s0) + 0x298);                             // 0x00175c10: lw $v0, 0x298($s0)
    *(uint32_t*)((s0) + 0x28c) = v0;                            // 0x00175c14: sw $v0, 0x28c($s0)
label_0x175c18:
    return;                                                     // 0x00175c20: jr $ra
    sp = sp + 0x10;                                             // 0x00175c24: addiu $sp, $sp, 0x10
}