void func_001aad20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001aad20: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001aad24: lui $at, 0x31
    func_0034e4b0();  // 0x34e4b0                               // 0x001aad2c: jal 0x34e4b0
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001aad30: lhu $a0, 0x37ba($at)
    if (a2 <= 0) goto label_0x1aad98;                           // 0x001aad38: blez $a2, 0x1aad98
    /* nop */                                                   // 0x001aad3c: nop 
    at = (a2 < 6) ? 1 : 0;                                      // 0x001aad40: slti $at, $a2, 6
    if (at != 0) goto label_0x1aad54;                           // 0x001aad44: bnez $at, 0x1aad54
    /* nop */                                                   // 0x001aad48: nop 
    goto label_0x1aad9c;                                        // 0x001aad4c: b 0x1aad9c
label_0x1aad54:
    a1 = 0x24 << 16;                                            // 0x001aad54: lui $a1, 0x24
    a0 = sp + 0x10;                                             // 0x001aad58: addiu $a0, $sp, 0x10
    func_0010a570();  // 0x10a4d8                                // 0x001aad5c: jal 0x10a4d8
    a1 = &str_0023da28;  // "bgm.afs"                           // 0x001aad60: addiu $a1, $a1, -0x25d8
    a3 = 0x54 << 16;                                            // 0x001aad64: lui $a3, 0x54
    a0 = 2;                                                     // 0x001aad68: addiu $a0, $zero, 2
    a1 = sp + 0x10;                                             // 0x001aad6c: addiu $a1, $sp, 0x10
    func_001283a8();  // 0x128380                                // 0x001aad74: jal 0x128380
    a3 = a3 + 0x1120;                                           // 0x001aad78: addiu $a3, $a3, 0x1120
label_0x1aad7c:
    func_00128be8();  // 0x1287d8                                // 0x001aad7c: jal 0x1287d8
    a0 = 2;                                                     // 0x001aad80: addiu $a0, $zero, 2
    v1 = 3;                                                     // 0x001aad84: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001aad88: nop 
    /* nop */                                                   // 0x001aad8c: nop 
    if (v0 != v1) goto label_0x1aad7c;                          // 0x001aad90: bne $v0, $v1, 0x1aad7c
    /* nop */                                                   // 0x001aad94: nop 
label_0x1aad98:
label_0x1aad9c:
    return;                                                     // 0x001aad9c: jr $ra
    sp = sp + 0x20;                                             // 0x001aada0: addiu $sp, $sp, 0x20
}