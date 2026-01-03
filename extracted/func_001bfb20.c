void func_001bfb20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001bfb20: lui $at, 0x31
    v0 = 0x22 << 16;                                            // 0x001bfb24: lui $v0, 0x22
    g_00315fc0 = 0;  // Global at 0x00315fc0                    // 0x001bfb28: sw $zero, 0x5fc0($at)
    v1 = a0 << 2;                                               // 0x001bfb2c: sll $v1, $a0, 2
    at = 0x31 << 16;                                            // 0x001bfb30: lui $at, 0x31
    v0 = v0 + -0x30e8;                                          // 0x001bfb34: addiu $v0, $v0, -0x30e8
    g_00315fc4 = 0;  // Global at 0x00315fc4                    // 0x001bfb38: sw $zero, 0x5fc4($at)
    v0 = v0 + v1;                                               // 0x001bfb3c: addu $v0, $v0, $v1
    at = 0x31 << 16;                                            // 0x001bfb40: lui $at, 0x31
    g_0031608c = 0;  // Global at 0x0031608c                    // 0x001bfb44: sw $zero, 0x608c($at)
    at = 0x31 << 16;                                            // 0x001bfb48: lui $at, 0x31
    g_00316094 = a0;  // Global at 0x00316094                   // 0x001bfb4c: sw $a0, 0x6094($at)
    at = 0x31 << 16;                                            // 0x001bfb50: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001bfb54: lui $a0, 0x31
    g_00316098 = 0;  // Global at 0x00316098                    // 0x001bfb58: sw $zero, 0x6098($at)
    v0 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001bfb5c: lw $v0, 0($v0)
    a1 = g_0021cf64;  // Global at 0x0021cf64                   // 0x001bfb60: lw $a1, 0x4c($v0)
    return func_0010ae00();  // Tail call                        // 0x001bfb64: j 0x10ac68
    a0 = a0 + 0x6010;                                           // 0x001bfb68: addiu $a0, $a0, 0x6010
    /* nop */                                                   // 0x001bfb6c: nop 
    sp = sp + -0x10;                                            // 0x001bfb70: addiu $sp, $sp, -0x10
    func_001ab180();  // 1ab180                                // 0x001bfb78: jal 0x1ab180
    /* nop */                                                   // 0x001bfb7c: nop 
    at = 0x31 << 16;                                            // 0x001bfb80: lui $at, 0x31
    v0 = 0x22 << 16;                                            // 0x001bfb84: lui $v0, 0x22
    v1 = g_0031608c;  // Global at 0x0031608c                   // 0x001bfb88: lw $v1, 0x608c($at)
    a0 = 0x31 << 16;                                            // 0x001bfb8c: lui $a0, 0x31
    v0 = v0 + -0x30d0;                                          // 0x001bfb90: addiu $v0, $v0, -0x30d0
    v1 = v1 << 2;                                               // 0x001bfb94: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bfb98: addu $v0, $v0, $v1
    v0 = g_0021cf30;  // Global at 0x0021cf30                   // 0x001bfb9c: lw $v0, 0($v0)
    /* call function at address in v0 */                        // 0x001bfba0: jalr $v0
    a0 = a0 + 0x5fc0;                                           // 0x001bfba4: addiu $a0, $a0, 0x5fc0
    func_001ab1d0();  // 1ab1d0                                // 0x001bfba8: jal 0x1ab1d0
    /* nop */                                                   // 0x001bfbac: nop 
    return;                                                     // 0x001bfbb4: jr $ra
    sp = sp + 0x10;                                             // 0x001bfbb8: addiu $sp, $sp, 0x10
}