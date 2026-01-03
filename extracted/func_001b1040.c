void func_001b1040() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b1040: addiu $sp, $sp, -0x10
    func_001b1000();  // 1b1000                                // 0x001b1048: jal 0x1b1000
    /* nop */                                                   // 0x001b104c: nop 
    v1 = 1;                                                     // 0x001b1050: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1b1084;                          // 0x001b1054: beq $v0, $v1, 0x1b1084
    /* nop */                                                   // 0x001b1058: nop 
    v0 = *(int16_t*)((gp) + -0x611c);                           // 0x001b105c: lh $v0, -0x611c($gp)
    v1 = *(int32_t*)((gp) + -0x6120);                           // 0x001b1064: lw $v1, -0x6120($gp)
    a2 = 0x190;                                                 // 0x001b1068: addiu $a2, $zero, 0x190
    v0 = v0 + 1;                                                // 0x001b106c: addiu $v0, $v0, 1
    *(uint16_t*)((gp) + -0x611c) = v0;                          // 0x001b1070: sh $v0, -0x611c($gp)
    v0 = v1 + -4;                                               // 0x001b1074: addiu $v0, $v1, -4
    *(uint32_t*)((gp) + -0x6120) = v0;                          // 0x001b1078: sw $v0, -0x6120($gp)
    func_00107c70();  // 107c70                                // 0x001b107c: jal 0x107c70
    *(uint32_t*)((v1) + -4) = a0;                               // 0x001b1080: sw $a0, -4($v1)
label_0x1b1084:
    return;                                                     // 0x001b1088: jr $ra
    sp = sp + 0x10;                                             // 0x001b108c: addiu $sp, $sp, 0x10
}