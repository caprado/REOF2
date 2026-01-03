void func_001730b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x001730b8: addiu $sp, $sp, -0x30
    func_00169b88();  // 169b88                                // 0x001730c4: jal 0x169b88
    a0 = sp + 0x10;                                             // 0x001730c8: addiu $a0, $sp, 0x10
    local_0 = 0;                                                // 0x001730cc: sw $zero, 0($sp)
    v0 = 0x21 << 16;                                            // 0x001730d0: lui $v0, 0x21
    local_4 = 0;                                                // 0x001730d4: sw $zero, 4($sp)
    a2 = v0 + 0x578c;                                           // 0x001730d8: addiu $a2, $v0, 0x578c
    local_8 = 0;                                                // 0x001730dc: sw $zero, 8($sp)
    a3 = 6;                                                     // 0x001730e0: addiu $a3, $zero, 6
    a1 = 7;                                                     // 0x001730e4: addiu $a1, $zero, 7
    v0 = g_0021578c;  // Global at 0x0021578c                   // 0x001730e8: lw $v0, 0($a2)
    /* nop */                                                   // 0x001730ec: nop 
label_0x1730f0:
    if (v0 == 0) goto label_0x17312c;                           // 0x001730f0: beqz $v0, 0x17312c
    a2 = a2 + 4;                                                // 0x001730f4: addiu $a2, $a2, 4
    v0 = g_00210048;  // Global at 0x00210048                   // 0x001730f8: lw $v0, 0x48($v0)
    if (v0 == 0) goto label_0x173118;                           // 0x001730fc: beqz $v0, 0x173118
    if (v0 == a3) goto label_0x173118;                          // 0x00173104: beq $v0, $a3, 0x173118
    s0 = 2;                                                     // 0x00173108: addiu $s0, $zero, 2
    if (v0 >= 0) goto label_0x173118;                           // 0x0017310c: bgez $v0, 0x173118
    s0 = 1;                                                     // 0x00173110: addiu $s0, $zero, 1
    s0 = 2;                                                     // 0x00173114: addiu $s0, $zero, 2
label_0x173118:
    v0 = s0 << 2;                                               // 0x00173118: sll $v0, $s0, 2
    a0 = sp + v0;                                               // 0x0017311c: addu $a0, $sp, $v0
    v1 = *(int32_t*)(a0);                                       // 0x00173120: lw $v1, 0($a0)
    v1 = v1 + 1;                                                // 0x00173124: addiu $v1, $v1, 1
    *(uint32_t*)(a0) = v1;                                      // 0x00173128: sw $v1, 0($a0)
label_0x17312c:
    a1 = a1 + -1;                                               // 0x0017312c: addiu $a1, $a1, -1
    if (a1 >= 0) goto label_0x1730f0;                           // 0x00173130: bgezl $a1, 0x1730f0
    v0 = g_00215790;  // Global at 0x00215790                   // 0x00173134: lw $v0, 0($a2)
    v0 = local_4;                                               // 0x00173138: lw $v0, 4($sp)
    if (v0 != 0) goto label_0x173150;                           // 0x0017313c: bnez $v0, 0x173150
    s0 = 1;                                                     // 0x00173140: addiu $s0, $zero, 1
    v0 = local_8;                                               // 0x00173144: lw $v0, 8($sp)
    s0 = 2;                                                     // 0x00173148: addiu $s0, $zero, 2
    if (v0 == 0) s0 = 0;                                        // 0x0017314c: movz $s0, $zero, $v0
label_0x173150:
    v0 = 0x21 << 16;                                            // 0x00173150: lui $v0, 0x21
    a0 = sp + 0x10;                                             // 0x00173154: addiu $a0, $sp, 0x10
    func_00169ba0();  // 169ba0                                // 0x00173158: jal 0x169ba0
    g_00215720 = s0;  // Global at 0x00215720                   // 0x0017315c: sw $s0, 0x5720($v0)
    return;                                                     // 0x0017316c: jr $ra
    sp = sp + 0x30;                                             // 0x00173170: addiu $sp, $sp, 0x30
}