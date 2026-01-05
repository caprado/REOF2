void func_001754a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001754a8: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x001754bc: jal 0x169af0
    if (v0 == 0) goto label_0x1754e8;                           // 0x001754c4: beqz $v0, 0x1754e8
    a1 = 0xff00 << 16;                                          // 0x001754cc: lui $a1, 0xff00
    a1 = a1 | 0x11a;                                            // 0x001754dc: ori $a1, $a1, 0x11a
    return func_00169940();  // Tail call                        // 0x001754e0: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001754e4: addiu $sp, $sp, 0x20
label_0x1754e8:
    v1 = s1 + 0x2b80;                                           // 0x001754e8: addiu $v1, $s1, 0x2b80
    a0 = s1 + 0x2ac0;                                           // 0x001754f0: addiu $a0, $s1, 0x2ac0
label_0x1754f4:
    a0 = a0 + 0x20;                                             // 0x00175514: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00175518: nop 
    /* nop */                                                   // 0x0017551c: nop 
    if (a0 != v1) goto label_0x1754f4;                          // 0x00175520: bne $a0, $v1, 0x1754f4
    v0 = v0 + 0x20;                                             // 0x00175524: addiu $v0, $v0, 0x20
    t4 = s0 + 8;                                                // 0x00175528: addiu $t4, $s0, 8
    t2 = 1;                                                     // 0x0017552c: addiu $t2, $zero, 1
    t1 = s0 + 0x30;                                             // 0x00175534: addiu $t1, $s0, 0x30
label_0x175538:
    a2 = t2 << 5;                                               // 0x0017553c: sll $a2, $t2, 5
    a2 = t3 + a2;                                               // 0x00175544: addu $a2, $t3, $a2
    a3 = *(int32_t*)((t1) + 8);                                 // 0x00175548: lw $a3, 8($t1)
    t2 = t2 + 1;                                                // 0x0017554c: addiu $t2, $t2, 1
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x00175554: lw $a0, 0x18($s0)
    t0 = (t2 < 4) ? 1 : 0;                                      // 0x0017555c: slti $t0, $t2, 4
    a0 = a0 + a3;                                               // 0x00175560: addu $a0, $a0, $a3
    *(uint32_t*)((s0) + 0x18) = a0;                             // 0x0017556c: sw $a0, 0x18($s0)
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x00175570: slt $v0, $a1, $v1
    if (v0 != 0) v1 = a1;                                       // 0x00175574: movn $v1, $a1, $v0
    t1 = t1 + 0x20;                                             // 0x00175580: addiu $t1, $t1, 0x20
    v1 = (v0 < a0) ? 1 : 0;                                     // 0x00175588: slt $v1, $v0, $a0
    if (v1 != 0) v0 = a0;                                       // 0x0017558c: movn $v0, $a0, $v1
    if (t0 != 0) goto label_0x175538;                           // 0x00175590: bnez $t0, 0x175538
    return;                                                     // 0x001755a8: jr $ra
    sp = sp + 0x20;                                             // 0x001755ac: addiu $sp, $sp, 0x20
}