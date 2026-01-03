void func_00163030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00163030: addiu $sp, $sp, -0x20
    func_00163100();  // 163100                                // 0x00163044: jal 0x163100
    v1 = 1;                                                     // 0x0016304c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1630bc;                          // 0x00163050: bnel $v0, $v1, 0x1630bc
    func_001630e0();  // 1630e0                                // 0x00163058: jal 0x1630e0
    /* nop */                                                   // 0x0016305c: nop 
    s0 = *(int32_t*)((s1) + 0x14);                              // 0x00163060: lw $s0, 0x14($s1)
    if (s0 == 0) goto label_0x1630b8;                           // 0x00163064: beqz $s0, 0x1630b8
    s2 = *(int32_t*)((s1) + 0xc);                               // 0x00163068: lw $s2, 0xc($s1)
    func_001634a8();  // 1634a8                                // 0x0016306c: jal 0x1634a8
    /* nop */                                                   // 0x00163070: nop 
    func_00162c08();  // 162c08                                // 0x00163074: jal 0x162c08
    *(uint32_t*)(s1) = 0;                                       // 0x0016307c: sw $zero, 0($s1)
    func_00162b68();  // 162b68                                // 0x00163080: jal 0x162b68
    v1 = *(int32_t*)(s2);                                       // 0x00163088: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0016308c: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00163090: jalr $v0
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00163098: sw $zero, 0x14($s1)
    return func_00162aa8();  // Tail call                        // 0x001630ac: j 0x162a48
    sp = sp + 0x20;                                             // 0x001630b0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001630b4: nop 
label_0x1630b8:
label_0x1630bc:
    return;                                                     // 0x001630c8: jr $ra
    sp = sp + 0x20;                                             // 0x001630cc: addiu $sp, $sp, 0x20
}