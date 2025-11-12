void func_001a1010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a1010: addiu $sp, $sp, -0x10
    a1 = a1 + -1;                                               // 0x001a1014: addiu $a1, $a1, -1
    v0 = *(int32_t*)(a0);                                       // 0x001a101c: lw $v0, 0($a0)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x001a1020: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x1a1034;                           // 0x001a1024: bnez $v0, 0x1a1034
    goto label_0x1a1084;                                        // 0x001a102c: b 0x1a1084
label_0x1a1034:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a1034: lw $v0, 8($a0)
    v1 = a1 << 4;                                               // 0x001a1038: sll $v1, $a1, 4
    v0 = v1 + v0;                                               // 0x001a103c: addu $v0, $v1, $v0
    a2 = *(int32_t*)((v0) + 4);                                 // 0x001a1040: lw $a2, 4($v0)
    if (a2 != 0) goto label_0x1a1054;                           // 0x001a1044: bnez $a2, 0x1a1054
    goto label_0x1a1080;                                        // 0x001a104c: b 0x1a1080
    /* nop */                                                   // 0x001a1050: nop 
label_0x1a1054:
    v0 = *(int32_t*)((a0) + 0x1c);                              // 0x001a1054: lw $v0, 0x1c($a0)
    v0 = v0 - a2;                                               // 0x001a1058: subu $v0, $v0, $a2
    *(uint32_t*)((a0) + 0x1c) = v0;                             // 0x001a105c: sw $v0, 0x1c($a0)
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a1060: lw $v0, 8($a0)
    v0 = v1 + v0;                                               // 0x001a1064: addu $v0, $v1, $v0
    *(uint32_t*)((v0) + 4) = 0;                                 // 0x001a1068: sw $zero, 4($v0)
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a106c: lw $v0, 8($a0)
    v0 = v0 + v1;                                               // 0x001a1070: addu $v0, $v0, $v1
    func_001a14c0();  // 0x1a1440                                // 0x001a1074: jal 0x1a1440
    *(uint32_t*)(v0) = 0;                                       // 0x001a1078: sw $zero, 0($v0)
    v0 = 1;                                                     // 0x001a107c: addiu $v0, $zero, 1
label_0x1a1080:
label_0x1a1084:
    return;                                                     // 0x001a1084: jr $ra
    sp = sp + 0x10;                                             // 0x001a1088: addiu $sp, $sp, 0x10
}