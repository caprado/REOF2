void func_001a5840() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x1a5840:
    v0 = *(int32_t*)(a0);                                       // 0x001a5840: lw $v0, 0($a0)
    if (v0 != 0) goto label_0x1a5854;                           // 0x001a5844: bnez $v0, 0x1a5854
    /* nop */                                                   // 0x001a5848: nop 
    goto label_0x1a587c;                                        // 0x001a584c: b 0x1a587c
label_0x1a5854:
    v1 = *(int32_t*)(v0);                                       // 0x001a5854: lw $v1, 0($v0)
    v0 = v1 & 1;                                                // 0x001a5858: andi $v0, $v1, 1
    if (v0 == 0) goto label_0x1a5874;                           // 0x001a585c: beqz $v0, 0x1a5874
    /* nop */                                                   // 0x001a5860: nop 
    v0 = -2;                                                    // 0x001a5864: addiu $v0, $zero, -2
    v0 = v1 & v0;                                               // 0x001a5868: and $v0, $v1, $v0
    goto label_0x1a587c;                                        // 0x001a586c: b 0x1a587c
    *(uint32_t*)(a0) = v0;                                      // 0x001a5870: sw $v0, 0($a0)
label_0x1a5874:
    goto label_0x1a5840;                                        // 0x001a5874: b 0x1a5840
    *(uint32_t*)(a0) = v1;                                      // 0x001a5878: sw $v1, 0($a0)
label_0x1a587c:
    return;                                                     // 0x001a587c: jr $ra
    /* nop */                                                   // 0x001a5880: nop 
}