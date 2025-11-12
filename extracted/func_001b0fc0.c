void func_001b0fc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int16_t*)((gp) + -0x611c);                           // 0x001b0fc0: lh $v0, -0x611c($gp)
    if (v0 != 0) goto label_0x1b0fd4;                           // 0x001b0fc4: bnez $v0, 0x1b0fd4
    goto label_0x1b0ff8;                                        // 0x001b0fcc: b 0x1b0ff8
    /* nop */                                                   // 0x001b0fd0: nop 
label_0x1b0fd4:
    v1 = *(int32_t*)((gp) + -0x6120);                           // 0x001b0fd4: lw $v1, -0x6120($gp)
    v0 = *(int32_t*)(v1);                                       // 0x001b0fd8: lw $v0, 0($v1)
    *(uint32_t*)(v1) = 0;                                       // 0x001b0fdc: sw $zero, 0($v1)
    a0 = *(int32_t*)((gp) + -0x6120);                           // 0x001b0fe0: lw $a0, -0x6120($gp)
    v1 = *(int16_t*)((gp) + -0x611c);                           // 0x001b0fe4: lh $v1, -0x611c($gp)
    a0 = a0 + 4;                                                // 0x001b0fe8: addiu $a0, $a0, 4
    v1 = v1 + -1;                                               // 0x001b0fec: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x6120) = a0;                          // 0x001b0ff0: sw $a0, -0x6120($gp)
    *(uint16_t*)((gp) + -0x611c) = v1;                          // 0x001b0ff4: sh $v1, -0x611c($gp)
label_0x1b0ff8:
    return;                                                     // 0x001b0ff8: jr $ra
    /* nop */                                                   // 0x001b0ffc: nop 
}