void func_0016ff28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x0016ff28: addiu $sp, $sp, -0x40
    func_00170018();  // 170018                                // 0x0016ff48: jal 0x170018
    *(uint32_t*)(s2) = 0;                                       // 0x0016ff4c: sw $zero, 0($s2)
    /* beqzl $a0, 0x170004 */                                   // 0x0016ff54: beqzl $a0, 0x170004
    v1 = *(int32_t*)(a0);                                       // 0x0016ff5c: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x170000;                           // 0x0016ff60: beqz $v1, 0x170000
    v1 = a0 + 0x34;                                             // 0x0016ffb8: addiu $v1, $a0, 0x34
    a0 = *(int32_t*)(s0);                                       // 0x0016ffbc: lw $a0, 0($s0)
    v0 = *(int32_t*)((v1) + 0x200);                             // 0x0016ffc4: lw $v0, 0x200($v1)
    a2 = sp + 0x10;                                             // 0x0016ffc8: addiu $a2, $sp, 0x10
    local_0 = v1;                                               // 0x0016ffcc: sw $v1, 0($sp)
    func_00159440();  // 159440                                // 0x0016ffd0: jal 0x159440
    local_4 = v0;                                               // 0x0016ffd4: sw $v0, 4($sp)
    a1 = 0xff00 << 16;                                          // 0x0016ffd8: lui $a1, 0xff00
    if (v0 == 0) goto label_0x16fff8;                           // 0x0016ffe0: beqz $v0, 0x16fff8
    a1 = a1 | 0xf1b;                                            // 0x0016ffe4: ori $a1, $a1, 0xf1b
    func_001698d0();  // 1698d0                                // 0x0016ffe8: jal 0x1698d0
    /* nop */                                                   // 0x0016ffec: nop 
    goto label_0x170004;                                        // 0x0016fff0: b 0x170004
label_0x16fff8:
    v1 = 1;                                                     // 0x0016fff8: addiu $v1, $zero, 1
    *(uint32_t*)(s2) = v1;                                      // 0x0016fffc: sw $v1, 0($s2)
label_0x170000:
label_0x170004:
    return;                                                     // 0x00170010: jr $ra
    sp = sp + 0x40;                                             // 0x00170014: addiu $sp, $sp, 0x40
}