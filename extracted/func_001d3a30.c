void func_001d3a30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d3a34: addiu $sp, $sp, -0x10
    v0 = -1;                                                    // 0x001d3a3c: addiu $v0, $zero, -1
    if (a0 != v0) goto label_0x1d3a5c;                          // 0x001d3a40: bne $a0, $v0, 0x1d3a5c
    a0 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d3a48: lw $a0, -0x7ae4($gp)
    if (a0 != v0) goto label_0x1d3a5c;                          // 0x001d3a4c: bne $a0, $v0, 0x1d3a5c
    /* nop */                                                   // 0x001d3a50: nop 
    goto label_0x1d3a80;                                        // 0x001d3a54: b 0x1d3a80
label_0x1d3a5c:
    func_001d3600();  // 0x1d35a0                                // 0x001d3a5c: jal 0x1d35a0
    /* nop */                                                   // 0x001d3a60: nop 
    if (v0 == 0) goto label_0x1d3a74;                           // 0x001d3a64: beqz $v0, 0x1d3a74
    goto label_0x1d3a80;                                        // 0x001d3a6c: b 0x1d3a80
    v0 = *(int32_t*)(v0);                                       // 0x001d3a70: lw $v0, 0($v0)
label_0x1d3a74:
    func_001d36b0();  // 0x1d3600                                // 0x001d3a74: jal 0x1d3600
    /* nop */                                                   // 0x001d3a78: nop 
    v0 = *(int32_t*)(v0);                                       // 0x001d3a7c: lw $v0, 0($v0)
label_0x1d3a80:
    return;                                                     // 0x001d3a84: jr $ra
    sp = sp + 0x10;                                             // 0x001d3a88: addiu $sp, $sp, 0x10
}